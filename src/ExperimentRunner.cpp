#include "ExperimentRunner.h"
#include "Model.h"
#include "Evaluator.h"
#include "DataPreparator.h"
#include "DataPreparatorPredict.h"

ExperimentRunner::ExperimentRunner(int data_columns_, std::string train_data_path_, std::string test_data_path_, int epochs_)
{
    data_columns = data_columns_;
    train_data_path = train_data_path_;
    test_data_path = test_data_path_;
    epochs = epochs_;
}


Model ExperimentRunner::trainModel()
{
    std::cout << "Trening modelu\n";
    Model model(data_columns, 20, 10, 1);
    DataPreparator dataPreparator(',', data_columns);
    std::pair<Tensor, Tensor> data = dataPreparator.prepare_data(train_data_path);
    Tensor data_x = data.first;
    Tensor data_y = data.second;
    model.fit(data_x, data_y, epochs);

    return model;
}

Tensor ExperimentRunner::getPredictions(Model model)
{
    std::cout << "Zbieranie predykcji\n";
    DataPreparatorPredict dataPreparator(',', data_columns);
    Tensor data_x = dataPreparator.prepare_data(test_data_path).first;
    Tensor y_pred = model.predict(data_x);

    return y_pred;
}

Tensor ExperimentRunner::getLabels()
{
    std::cout << "Zbieranie etykiet\n";
    DataPreparator dataPreparator(',', data_columns);
    Tensor data_y = dataPreparator.prepare_data(test_data_path).second;

    return data_y;
}
void ExperimentRunner::evaluate(Model model)
{

    Tensor y_pred = getPredictions(model);
    Tensor y_true = getLabels();

    std::vector<float> y_true_ = {};
    std::vector<float> y_pred_ = {};

    for(int i = 0; i < 3; i++)
    {
        y_true_.push_back(y_true.flat<float>().data()[i]);
        y_pred_.push_back(y_pred.flat<float>().data()[i]);
    }

    Evaluator ev = Evaluator(y_true_, y_pred_);
    ev.evaluate();
}

void ExperimentRunner::runExperiment()
{
    Model model = trainModel();
    std::cout << "Ewaluacja modelu\n";
    evaluate(model);
}

#include "ExperimentRunner.h"
#include "Model.h"
#include "Evaluator.h"
#include "DataPreparator.h"
#include "DataPreparatorPredict.h"
#include "DataSet.h"

ExperimentRunner::ExperimentRunner(int data_columns_, std::string train_data_path_, std::string test_data_path_, int epochs_)
{
    data_columns = data_columns_;
    train_data_path = train_data_path_;
    test_data_path = test_data_path_;
    epochs = epochs_;
    models = {Model(data_columns_, 15, 10, 1), Model(data_columns_, 20, 10, 1), Model(data_columns_, 25, 10, 1)};
    data_sets_train = {DataSetTrain(data_columns_, train_data_path_, 2), DataSetTrain(data_columns_, train_data_path_, 2)};
    data_sets_predict = {DataSetPredict(data_columns_, test_data_path_), DataSetPredict(data_columns_, test_data_path_)};
}


void ExperimentRunner::trainModels()
{
    std::cout << "Trening modeli\n";

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 2; j++)
            models[i].fit(data_sets_train[j].get_features_data(), data_sets_train[j].get_labels_data(), epochs);
}

Tensor ExperimentRunner::getPredictions(int model_num, int data_set_num)
{
    std::cout << "Zbieranie predykcji\n";
    Tensor y_pred = models[model_num].predict(data_sets_train[data_set_num].get_features_data());

    return y_pred;
}

void ExperimentRunner::evaluate(Tensor * y_pred, Tensor * y_true)
{

    std::vector<float> y_true_ = {};
    std::vector<float> y_pred_ = {};

    for(int i = 0; i < 3; i++)
    {
        y_true_.push_back(y_true->flat<float>().data()[i]);
        y_pred_.push_back(y_pred->flat<float>().data()[i]);
    }

    Evaluator ev = Evaluator(y_true_, y_pred_);
    ev.evaluate();
}

void ExperimentRunner::runExperiment()
{
    trainModels();
    std::cout << "Ewaluacja modeli\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 2; j++)
            {
            tensorflow::Tensor y_true = data_sets_train[j].get_labels_data();
            tensorflow::Tensor y_pred = getPredictions(i, j);
            evaluate(&y_pred, &y_true);
            }
}

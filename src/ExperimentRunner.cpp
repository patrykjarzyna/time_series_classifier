#include "ExperimentRunner.h"
#include "Model.h"
#include "DataPreparator.h"

ExperimentRunner::ExperimentRunner(int data_columns_, std::string train_data_path_, std::string test_data_path_, int epochs_)
{
    data_columns = data_columns_;
    train_data_path = train_data_path_;
    test_data_path = test_data_path_;
    epochs = epochs_;
}


Model ExperimentRunner::trainModel()
{
    Model model(data_columns, 20, 10, 1);
    DataPreparator dataPreparator(',', data_columns);
    Tensor data_x = dataPreparator.prepare_data(train_data_path);
    Tensor data_y = dataPreparator.prepare_data(train_data_path);
    model.fit(data_x, data_y, epochs);

    return model;
}

float ExperimentRunner::getPredictions(Model model)
{
    DataPreparator dataPreparator(',', data_columns);
    Tensor data_x = dataPreparator.prepare_data(train_data_path);
    float y_pred = model.predict(data_x);

    return y_pred;
}

float ExperimentRunner::getLabels()
{
    DataPreparator dataPreparator(',', data_columns);
    Tensor data_x = dataPreparator.prepare_data(test_data_path);

    return 1.0;
}
void ExperimentRunner::evaluate()
{

}

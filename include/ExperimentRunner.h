#include "Model.h"
#include "DataSetTrain.h"
#include "DataSetPredict.h"

#ifndef EXPERIMENTRUNNER_H
#define EXPERIMENTRUNNER_H
#include "DataSet.h"

class ExperimentRunner
{
    public:
        ExperimentRunner(int data_columns_, std::string train_data_path_, std::string test_data_path_, int epochs_);
        /// Uruchamia wszystkie etapy eksperymentu.
        void runExperiment();

    private:
        std::vector<Model> models = {};
        std::vector<DataSetTrain> data_sets_train = {};
        std::vector<DataSetPredict> data_sets_predict = {};
        /// Zwraca wytrenowany model.
        void trainModels();
        /// Zwraca predykcje modelu.
        Tensor getPredictions(int model_num, int data_set_num);
        /// Wykonuje ewaluacje na podstawie zdefiniowanych metryk.
        void evaluate(Tensor * y_pred, Tensor * y_true);

        int data_columns;
        int epochs;
        std::string train_data_path;
        std::string test_data_path;

};

#endif // EXPERIMENTRUNNER_H

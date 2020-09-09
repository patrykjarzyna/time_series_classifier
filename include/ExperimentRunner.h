#include "Model.h"
#ifndef EXPERIMENTRUNNER_H
#define EXPERIMENTRUNNER_H


class ExperimentRunner
{
    public:
        ExperimentRunner(int data_columns_, std::string train_data_path_, std::string test_data_path_, int epochs_);
        /// Uruchamia wszystkie etapy eksperymentu.
        void runExperiment();

    private:
        Model models [4];
        DataSetTrain data_sets_train [2];
        DataSetsTrain data_sets_predict [2];
        /// Zwraca wytrenowany model.
        Model trainModel(Model *model, DataSetTrain *data_set_train);
        /// Zwraca predykcje modelu.
        Tensor getPredictions(Model *model, DataSetTrain *data_set_predict);
        /// Wykonuje ewaluacje na podstawie zdefiniowanych metryk.
        void evaluate(Model *model);

        int data_columns;
        int epochs;
        std::string train_data_path;
        std::string test_data_path;

};

#endif // EXPERIMENTRUNNER_H

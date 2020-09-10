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
        Model models [3];
        DataSetTrain data_sets_train [2];
        DataSetPredict data_sets_predict [2];
        /// Zwraca wytrenowany model.
        void trainModel();
        /// Zwraca predykcje modelu.
        Tensor getPredictions();
        /// Wykonuje ewaluacje na podstawie zdefiniowanych metryk.
        void evaluate();

        int data_columns;
        int epochs;
        std::string train_data_path;
        std::string test_data_path;

};

#endif // EXPERIMENTRUNNER_H

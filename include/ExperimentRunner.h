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
        /// Zwraca wytrenowany model.
        Model trainModel();
        /// Zwraca predykcje modelu.
        Tensor getPredictions(Model model);
        /// Zwraca etykiety.
        Tensor getLabels();
        /// Wykonuje ewaluacje na podstawie zdefiniowanych metryk.
        void evaluate(Model model);

        int data_columns;
        int epochs;
        std::string train_data_path;
        std::string test_data_path;

};

#endif // EXPERIMENTRUNNER_H

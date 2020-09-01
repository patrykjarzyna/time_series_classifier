#include "Model.h"
#ifndef EXPERIMENTRUNNER_H
#define EXPERIMENTRUNNER_H


class ExperimentRunner
{
    public:
        ExperimentRunner(int data_columns_, std::string train_data_path_, std::string test_data_path_, int epochs_);
        void runExperiment();

    private:
        Model trainModel();
        float getPredictions(Model model);
        float getLabels();
        void evaluate();

        int data_columns;
        int epochs;
        std::string train_data_path;
        std::string test_data_path;

};

#endif // EXPERIMENTRUNNER_H

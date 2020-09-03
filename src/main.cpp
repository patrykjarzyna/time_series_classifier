#include <string>
#include <fstream>
#include <vector>
#include <utility>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include "DataPreparator.h"
#include "Model.h"
#include "Evaluator.h"
#include "ExperimentRunner.h"

using namespace tensorflow;

int main() {

    ExperimentRunner er = ExperimentRunner(2, "/time_series_classifier/a.csv", "/time_series_classifier/a.csv", 300);
    er.runExperiment();

}


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


int main() {
    DataPreparator dr(',', 2);
    Tensor data_x = dr.prepare_data("/tmp/time_series/a.csv");
    Tensor data_y = dr.prepare_data("/tmp/time_series/a.csv");
    Model model(3, 2, 2, 1);

    model.fit(data_x, data_y, 300);
    std::vector<float> y_true;
    y_true.push_back(model.predict(data_x));
    Evaluator ev = Evaluator(y_true, y_true);
    ev.evaluate();
    //for (std::vector<pairStrVec>::const_iterator i = ones.begin(); i != ones.end(); ++i)
      //      {
       //     for (std::vector<float>::const_iterator j = i->begin(); j != i->end(); ++j)
         //       std::cout << *j << std::endl;
           // }
}


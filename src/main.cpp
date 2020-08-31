#include <string>
#include <fstream>
#include <vector>
#include <utility>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include "DataPreparator.h"

int main() {
    typedef std::vector<float> pairStrVec;
    DataPreparator dr(',', 2);
    dr.prepare_data("/tmp/time_series/a.csv");
    //for (std::vector<pairStrVec>::const_iterator i = ones.begin(); i != ones.end(); ++i)
      //      {
       //     for (std::vector<float>::const_iterator j = i->begin(); j != i->end(); ++j)
         //       std::cout << *j << std::endl;
           // }
}

#include <string>
#include <fstream>
#include <vector>
#include <utility>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include "DataReader.h"

int main() {
    typedef std::vector<float> pairStrVec;
    DataReader dr = DataReader(',', 2);
    std::vector<std::vector<float>> ones = dr.read_file("/tmp/time_series/a.csv");
    for (std::vector<pairStrVec>::const_iterator i = ones.begin(); i != ones.end(); ++i)
            {
            for (std::vector<float>::const_iterator j = i->begin(); j != i->end(); ++j)
                std::cout << *j << std::endl;
            }
}

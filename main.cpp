#include <string>
#include <fstream>
#include <vector>
#include <utility>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include "DataReader.h"

int main() {
    typedef std::pair<std::vector<float>, int> pairStrVec;
    DataReader dr = DataReader(',', 2);
    std::vector<std::pair<std::vector<float>, int>> ones = dr.read_file("/home/patryk/Desktop/a.csv");
    for (std::vector<pairStrVec>::const_iterator i = ones.begin(); i != ones.end(); ++i)
            {
                std::cout << i->second << std::endl;
                for (std::vector<float>::const_iterator iter = i->first.begin(); iter != i->first.end(); ++iter)
                    std::cout << *iter << std::endl;
            }
    // Write to another file to check that this was successful


    return 0;
}

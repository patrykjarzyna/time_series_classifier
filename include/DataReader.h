#include <string>
#include <fstream>
#include <vector>
#include <utility>
#include <stdexcept>
#include <sstream>
#include <iostream>
#ifndef DATAREADER_H
#define DATAREADER_H


class DataReader
{
    public:
        DataReader(char delimeter_, int data_cols_);

        std::vector<std::vector<float>> read_file(std::string filepath);

    //private:
        char delimeter;
        int data_cols;


        std::ifstream get_file(std::string filepath);
};

#endif // DATAREADER_H

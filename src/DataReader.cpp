#include "DataReader.h"

DataReader::DataReader(char delimeter_, int data_cols_)
{
    delimeter = delimeter_;
    data_cols = data_cols_;
}

std::vector<std::vector<float>> DataReader::read_file(std::string filepath)
{

    std::ifstream file = this->get_file(filepath);
    std::string line;
    std::vector<std::vector<float>> result;

    int rowIdx = 0;
    while(std::getline(file, line))
    {
        std::stringstream ss(line);
        float val;

        result.push_back(std::vector<float> {});

        while(ss >> val)
        {
            result.at(rowIdx).push_back(val);
            if(ss.peek() == ',') ss.ignore();
        }
        rowIdx++;
    }

    file.close();

    return result;
}

std::ifstream DataReader::get_file(std::string filepath)
{
    std::ifstream file(filepath);

    if(!file.is_open()) throw std::runtime_error("Could not open file");

    return file;
}

#include "DataReader.h"

DataReader::DataReader(char delimeter_, int data_cols_)
{
    delimeter = delimeter_;
    data_cols = data_cols_;
}

std::vector<std::pair<std::vector<float>, int>> DataReader::read_file(std::string filepath)
{

    std::ifstream file = this->get_file(filepath);
    std::string line;
    std::vector<std::pair<std::vector<float>, int>> result;

    int rowIdx = 0;
    while(std::getline(file, line))
    {
        std::stringstream ss(line);
        float val;
        int colIdx = 0;

        result.push_back({std::vector<float> {}, 0.0});

        while(ss >> val)
        {
            if (colIdx == this->data_cols)
                // Ostatnia kolumna zawiera etykiete
                result.at(rowIdx).second = val;

            else

                result.at(rowIdx).first.push_back(val);
            if(ss.peek() == ',') ss.ignore();
            colIdx++;

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

#include "DataReaderPredict.h"

DataReaderPredict::DataReaderPredict(char delimeter_, int data_cols_)
{
    delimeter = delimeter_;
    data_cols = data_cols_;
}

std::vector<std::pair<std::vector<float>, int>> DataReaderPredict::read_file(std::string filepath)
{

    std::ifstream file = this->get_file(filepath);
    std::string line;
    std::vector<std::vector<float>> result;

    int rowIdx = 0;
    while(std::getline(file, line))
    {
        std::stringstream ss(line);
        float val;
        int colIdx = 0;

        result.push_back(std::vector<float> {});

        while(ss >> val)
        {
            result.at(rowIdx).push_back(val);
            if(ss.peek() == ',') ss.ignore();
            colIdx++;

        }
        rowIdx++;
    }

    file.close();

    return result;
}

#ifndef DATAREADERPREDICT_H
#define DATAREADERPREDICT_H

#include <DataReader.h>


class DataReaderPredict : public DataReader
{
    public:
        DataReaderPredict(char delimeter_, int data_cols_);

        std::vector<std::pair<std::vector<float>, int>> read_file(std::string filepath);
};

#endif // DATAREADERPREDICT_H

#ifndef DATASETPREDICT_H
#define DATASETPREDICT_H

#include <DataSet.h>


class DataSetPredict : public DataSet
{
    public:
        DataSetPredict(int data_columns, std::string data_path_);

    private:
        virtual void load_data(DataPreparator *data_prep);
};

#endif // DATASETPREDICT_H

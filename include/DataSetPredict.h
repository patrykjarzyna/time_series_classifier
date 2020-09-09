#ifndef DATASETPREDICT_H
#define DATASETPREDICT_H

#include <DataSet.h>


class DataSetPredict : public DataSet
{
    public:
        DataSetPredict(data_path, data_mode);

    private:
        virtual void load_data(DataPreparator *data_prep);
};

#endif // DATASETPREDICT_H

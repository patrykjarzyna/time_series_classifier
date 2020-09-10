#include "DataSetPredict.h"
#include "DataPreparator.h"
#include "DataPreparatorPredict.h"

DataSetPredict::DataSetPredict(int data_columns, std::string data_path_)
{
    data_path = data_path_;
    DataPreparatorPredict dataPreparator(',', data_columns);
    DataPreparator *data_prep = &dataPreparator;
    load_data(data_prep);
}

void DataSetPredict::load_data(DataPreparator *data_prep)
{
    features = data_prep->prepare_data(data_path).first;
}

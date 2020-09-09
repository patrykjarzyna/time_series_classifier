#include "DataSetTrain.h"

DataSetTrain::DataSetTrain(int data_columns, std::string data_path_)
{
    data_path = data_path_;
    DataPreparatorTrain = dataPreparator(',', data_columns);
    DataPreparator *data_prep = &data_prep_train;
    load_data(data_prep);
    labels_num = std::set<int> s( labels.begin(), labels.end() ).size();
}

Tensor DataSetTrain::get_labels_data()
{
    return labels;
}
std::set DataSetTrain::get_unique_labels()
{
    std::set<int> s( labels.begin(), labels.end() );

    return s;
}

int DataSetTrain::get_labels_num()
{
    return labels_num;
}


virtual void DataSetTrain::load_data(DataPreparator *data_prep)
{
    features = data_prep->prepare_data(data_path).first;
    labels = data_prep->prepare_data(data_path).first;
}


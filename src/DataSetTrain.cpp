#include "DataSetTrain.h"
#include "DataPreparator.h"
#include "DataPreparatorTrain.h"

DataSetTrain::DataSetTrain(int data_columns, std::string data_path_, int sample_size_)
{
    data_path = data_path_;
    DataPreparatorTrain dataPreparator(',', data_columns, sample_size_);
    DataPreparator *data_prep = &dataPreparator;
    load_data(data_prep);
}

Tensor DataSetTrain::get_labels_data()
{
    return labels;
}

std::set<float> DataSetTrain::get_unique_labels()
{
    std::set<float>  s; //std::set<float> s(labels.begin(), labels.end());

    return s;
}

int DataSetTrain::get_labels_num()
{
    return 2; // std::set<int> s(labels.begin(), labels.end()).size();
}


void DataSetTrain::load_data(DataPreparator *data_prep)
{
    features = data_prep->prepare_data(data_path).first;
    labels = data_prep->prepare_data(data_path).second;
}


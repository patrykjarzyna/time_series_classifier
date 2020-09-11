#include "DataSet.h"

using namespace tensorflow;

Tensor DataSet::get_features_data()
{
    return features;
}
int DataSet::get_feature_num()
{
    return data_cols;
}

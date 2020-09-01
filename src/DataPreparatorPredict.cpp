#include "DataPreparatorPredict.h"

using namespace tensorflow;

DataPreparatorPredict::DataPreparatorPredict()
{

}

Tensor DataPreparatorPredict::prepare_data(std::string filepath)
{
    //std::vector<float> data_set = read_file(filepath)[0];
    //Tensor data_x(DT_FLOAT, TensorShape({1, 3}));
    //std::copy_n(data_set.begin(), data_set.size() - 1, data_x.flat<float>().data());

    //return data_x;
}

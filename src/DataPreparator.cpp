#include "DataPreparator.h"
#include "tensorflow/cc/client/client_session.h"
#include "tensorflow/cc/ops/standard_ops.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/cc/framework/gradients.h"

using namespace tensorflow;

DataPreparator::DataPreparator(char delimeter_, int data_cols_):DataReader(delimeter_, data_cols_)
{
    delimeter = delimeter_;
    data_cols = data_cols_;
}

Tensor DataPreparator::prepare_data(std::string filepath)
{
    std::vector<float> data_set = read_file(filepath)[0];
    Tensor data_x(DT_FLOAT, TensorShape({1, 3}));
    std::copy_n(data_set.begin(), data_set.size(), data_x.flat<float>().data());

    return data_x;
}

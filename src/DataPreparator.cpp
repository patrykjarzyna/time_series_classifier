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


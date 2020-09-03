#include "DataPreparatorPredict.h"
#include "DataPreparator.h"

using namespace tensorflow;

DataPreparatorPredict::DataPreparatorPredict(char delimeter_, int data_cols_):DataPreparator(delimeter_, data_cols_)
{
    delimeter = delimeter_;
    data_cols = data_cols_;
}

std::pair<Tensor, Tensor> DataPreparatorPredict::prepare_data(std::string filepath)
{
std::vector<std::vector<float>> data_set = read_file(filepath);

std::vector<float> data_x_vec;
std::vector<float> data_y_vec;

for (std::vector<std::vector<float>>::const_iterator i = data_set.begin(); i != data_set.end(); ++i)
    {
    int col_index = 0;
    for (std::vector<float>::const_iterator j = i->begin(); j != i->end(); ++j)
        {
        if (data_cols > col_index)
            data_x_vec.push_back(*j);
        else
            data_y_vec.push_back(0);

        col_index++;
        }
    }

    Tensor data_x(DT_FLOAT, TensorShape({data_set.size(), data_cols}));
    std::copy_n(data_x_vec.begin(), data_x_vec.size(), data_x.flat<float>().data());

    Tensor data_y(DT_FLOAT, TensorShape({data_set.size(), 1}));
    std::copy_n(data_y_vec.begin(), data_y_vec.size(), data_y.flat<float>().data());

    std::pair <Tensor, Tensor> predict_data (data_x, data_y);

    return predict_data;
}

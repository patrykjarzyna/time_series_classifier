#ifndef DATASET_H
#define DATASET_H
#include "DataPreparator.h"
#include "tensorflow/cc/client/client_session.h"
#include "tensorflow/cc/ops/standard_ops.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/cc/framework/gradients.h"

using namespace tensorflow;

class DataSet
{
    public:
        Tensor get_features_data();
        int get_feature_num();

    protected:
        virtual void load_data(DataPreparator *data_prep)=0;
        Tensor labels;
        Tensor features;
        int data_cols;
        int labels_num;
        std::string data_path;
};

#endif // DATASET_H

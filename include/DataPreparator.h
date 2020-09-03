#include "tensorflow/cc/client/client_session.h"
#include "tensorflow/cc/ops/standard_ops.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/cc/framework/gradients.h"
#ifndef DATAPREPARATOR_H
#define DATAPREPARATOR_H

#include <DataReader.h>

using namespace tensorflow;

class DataPreparator: public DataReader
{
    public:
        /// Transformuje dane z pliku z wektorów na tensory.
        virtual std::pair<Tensor, Tensor> prepare_data(std::string filepath);
        DataPreparator(char delimeter_, int data_cols_);

};

#endif // DATAPREPARATOR_H

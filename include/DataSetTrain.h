#ifndef DATASETTRAIN_H
#define DATASETTRAIN_H

#include <DataSet.h>
#include "DataPreparator.h"


class DataSetTrain : public DataSet
{
    public:
        DataSetTrain(int data_columns, std::string data_path_, int sample_size_);
        Tensor get_labels_data();
        std::set<float> get_unique_labels();
        int get_labels_num();

    private:
        virtual void load_data(DataPreparator *data_prep);
        int labels_num;

};
#endif // DATASETTRAIN_H

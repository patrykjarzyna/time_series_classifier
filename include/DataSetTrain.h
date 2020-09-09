#ifndef DATASETTRAIN_H
#define DATASETTRAIN_H

#include <DataSet.h>


class DataSetTrain : public DataSet
{
    public:
        DataSetTrain(data_path, data_mode);
        Tensor get_labels_data();
        std::set get_unique_labels();
        int get_labels_num();

    private:
        virtual void load_data(DataPreparator *data_prep);
        int labels_num;

};
#endif // DATASETTRAIN_H

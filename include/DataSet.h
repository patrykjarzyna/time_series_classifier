#ifndef DATASET_H
#define DATASET_H


class DataSet
{
    public:
        DataSet();
        void get_labels_data();
        void get_features_data();
        void get_unique_labels();

    private:
        void load_data();
        Tensor labels;
        Tensor features;
        int labels_num;


};

#endif // DATASET_H

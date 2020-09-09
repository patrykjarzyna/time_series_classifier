#ifndef DATASET_H
#define DATASET_H


class DataSet
{
    public:
        DataSet(data_path, data_mode);
        Tensor get_features_data();
        int get_feature_num();

    private:
        virtual void load_data(DataPreparator *data_prep)=0;
        Tensor labels;
        Tensor features;
        int labels_num;
        std::string data_path;
};

#endif // DATASET_H

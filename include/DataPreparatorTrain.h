#ifndef DATAPREPARATORTRAIN_H
#define DATAPREPARATORTRAIN_H

#include <DataPreparator.h>

class DataPreparatorTrain : public DataPreparator
{
    public:
        DataPreparatorTrain(char delimeter_, int data_cols_, int sample_size_);
        /// Zwraca dane pomijając etykiety.
        virtual std::pair<Tensor, Tensor> prepare_data(std::string filepath);
    private:
        int sample_size;
};

#endif // DATAPREPARATORTRAIN_H

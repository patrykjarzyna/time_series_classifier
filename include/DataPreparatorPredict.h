#ifndef DATAPREPARATORPREDICT_H
#define DATAPREPARATORPREDICT_H

#include <DataPreparator.h>

using namespace tensorflow;

class DataPreparatorPredict : public DataPreparator
{
    public:
        DataPreparatorPredict(char delimeter_, int data_cols_);
        /// Zwraca dane pomijając etykiety.
        virtual std::pair<Tensor, Tensor> prepare_data(std::string filepath);

};

#endif // DATAPREPARATORPREDICT_H

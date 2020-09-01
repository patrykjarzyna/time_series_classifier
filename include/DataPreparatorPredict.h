#ifndef DATAPREPARATORPREDICT_H
#define DATAPREPARATORPREDICT_H

#include <DataPreparator.h>

using namespace tensorflow;

class DataPreparatorPredict //: public DataPreparator
{
    public:
        DataPreparatorPredict();
        Tensor prepare_data(std::string filepath);

    protected:

    private:
};

#endif // DATAPREPARATORPREDICT_H

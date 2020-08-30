#ifndef DATAPREPARATOR_H
#define DATAPREPARATOR_H

#include <DataReader.h>


class DataPreparator
{
    public:
        int data;
        int prepare_data();
        DataPreparator();
        virtual ~DataPreparator();

    private:
        void remove_outliers();
        void pad_data();
};

#endif // DATAPREPARATOR_H

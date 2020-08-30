#ifndef PREDICT_H
#define PREDICT_H


class Predict
{
    public:
        int predictions;
        int save_to_file();
        /** Default constructor */
        Predict();
        /** Default destructor */
        virtual ~Predict();

    private:
};

#endif // PREDICT_H

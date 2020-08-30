#ifndef EVALUATOR_H
#define EVALUATOR_H


class Evaluator
{
    public:
        int y_true;
        int y_predicted;
        /** Default constructor */
        Evaluator();
        /** Default destructor */
        virtual ~Evaluator();

    private:
        float get_precission();
        float get_recall();
        float get_accuracy();
};

#endif // EVALUATOR_H

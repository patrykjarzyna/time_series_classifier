#ifndef EVALUATOR_H
#define EVALUATOR_H


class Evaluator
{
    public:
        void y_true;
        void y_predicted;
        /** Default constructor */
        Evaluator();
        /** Default destructor */
        virtual ~Evaluator();

    protected:

    private:
        float get_precission();
        float get_recall();
};

#endif // EVALUATOR_H

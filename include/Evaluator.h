#ifndef EVALUATOR_H
#define EVALUATOR_H


class Evaluator
{
    public:
        int y_true;
        int y_predicted;
        Evaluator();
        void evaluate()

    private:
        float get_accuracy();
        float get_fscore();
};

#endif // EVALUATOR_H

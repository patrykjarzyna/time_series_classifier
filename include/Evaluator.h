#ifndef EVALUATOR_H
#define EVALUATOR_H


class Evaluator
{
    public:
        int y_true;
        int y_predicted;
        Evaluator();

    private:
        float evaluate();
};

#endif // EVALUATOR_H

#ifndef EVALUATOR_H
#define EVALUATOR_H


class Evaluator
{
    public:
        Evaluator(std::vector<float> y_true_, std::vector<float> y_predicted_);
        void evaluate();

    private:
        float get_accuracy();
        float get_recall();
        std::vector<float> y_true;
        std::vector<float> y_predicted;
};

#endif // EVALUATOR_H

#ifndef EVALUATOR_H
#define EVALUATOR_H


class Evaluator
{
    public:
        Evaluator(std::vector<float> y_true_, std::vector<float> y_predicted_);
        /// Zwraca wyniki metryk dla predykcji i prawdziwych wartości.
        void evaluate();

    private:
        /// Wylicza jaki procent predykcji pokrywa się z prawdziwymi wartościami.
        float get_accuracy();
        /// Wylicza recall dla predykcji i prawdziwych wartości.
        float get_recall();
        /// Prawdziwe wartości.
        std::vector<float> y_true;
        /// Predykcje modelu.
        std::vector<float> y_predicted;
};

#endif // EVALUATOR_H

#include <string>
#include <fstream>
#include <vector>
#include <utility>
#include <stdexcept>
#include <sstream>
#include <math.h>
#include <iostream>
#include "Evaluator.h"

Evaluator::Evaluator(std::vector<float> y_true_, std::vector<float> y_predicted_)
{
    y_true = y_true_;
    y_predicted = y_predicted_;
}

void Evaluator::evaluate()
{
    float accuracy = get_accuracy();
    float recall = get_recall();

    std::cout << "Accuracy: " << accuracy << std::endl << "Recall: " << recall << std::endl;
}

float Evaluator::get_accuracy()
{
    float correct_num = 0.0;
    for(int i = 0; i < y_true.size(); i++)
    {
        if (round(y_true[i]) == round(y_true[i]))
            correct_num++;
    }

    return correct_num / y_true.size();
}

float Evaluator::get_recall()
{
    float correct_num = 0;
    float all_true = 0;

    for(int i = 0; i < y_true.size(); i++)
    {
        if (round(y_true[i]) == 1)
            {
            all_true++;
            if (round(y_true[i]) == round(y_true[i]))
                correct_num++;
            }
    }
    return correct_num / 2;
}

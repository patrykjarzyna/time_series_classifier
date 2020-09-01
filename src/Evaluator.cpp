#include <string>
#include <fstream>
#include <vector>
#include <utility>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include "Evaluator.h"

Evaluator::Evaluator()
{
    //ctor
}

void Evaluator::evaluate()
{
    float accuracy = get_accuracy();
    float fscore = get_fscore();

    std::cout << "Accuracy: " << accuracy << std::endl << "Fscore: " << fscore;
}

float Evaluator::get_accuracy()
{
    float correct_num = 0.0;
    for(int i = 0; i < 3; i++)
    {
        if (y_true[i] == y_true[i])
            correct_num++;
    }

    return correct_num / 3;
}

float Evaluator::get_fscore()
{
    float correct_num = 0.0;
    for(int i = 0; i < 3; i++)
    {
        if (y_true[i] == y_true[i])
            correct_num++;
    }

    return correct_num / 3;
}

#include "tensorflow/cc/client/client_session.h"
#include "tensorflow/cc/ops/standard_ops.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/cc/framework/gradients.h"
#ifndef MODEL_H
#define MODEL_H


class Model
{
    public:
        void fit(int input, int labels);
        void predict(int input);
        void saveModel();

        Model(int input_size, int layer1_size, int layer2_size, int output_size);


    private:
        void assign_weights(int input_size, int layer1_size, int layer2_size, int output_size);
        void assign_biases(int input_size, int layer1_size, int layer2_size, int output_size);

        Scope scope;
        ClientSession model_session;

        auto x, y;
        auto w1, w2, w3;
        auto assign_w1, assign_w2, assign_w3;
        auto apply_w1, apply_w2, apply_w3;

        // bias
        auto b1, b2, b3;
        auto assign_b1, assign_b2, assign_b3;
        auto apply_b1, apply_b2, apply_b3;

        // layers
        auto layer_1, layer_2, layer_3;

        // loss calculation
        auto loss;

        // add the gradients operations to the graph
        std::vector<Output> grad_outputs;
        std::vector<Tensor> outputs;
};

#endif // MODEL_H

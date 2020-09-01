#include "tensorflow/cc/client/client_session.h"
#include "tensorflow/cc/ops/standard_ops.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/cc/framework/gradients.h"
#ifndef MODEL_H
#define MODEL_H

using namespace tensorflow;

class Model
{
    public:
        void fit(Tensor x_data, Tensor y_data);
        void predict(Tensor x_data);

        Model(int input_size, int layer1_size, int layer2_size, int output_size);


    private:
        void assign_weights(int input_size, int layer1_size, int layer2_size, int output_size);
        void assign_biases(int input_size, int layer1_size, int layer2_size, int output_size);

        Scope scope = Scope::NewRootScope();
        ClientSession* model_session;

        tensorflow::Output x, y;
        tensorflow::Output w1, w2, w3;
        tensorflow::Output assign_w1, assign_w2, assign_w3;
        tensorflow::Output apply_w1, apply_w2, apply_w3;

        // bias
        tensorflow::Output b1, b2, b3;
        tensorflow::Output assign_b1, assign_b2, assign_b3;
        tensorflow::Output apply_b1, apply_b2, apply_b3;

        // layers
        tensorflow::Output layer_1, layer_2, layer_3;

        // loss calculation
        tensorflow::Output loss;

        // add the gradients operations to the graph
        std::vector<Output> grad_outputs;
        std::vector<Tensor> outputs;
};

#endif // MODEL_H

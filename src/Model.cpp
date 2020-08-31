#include "tensorflow/cc/client/client_session.h"
#include "tensorflow/cc/ops/standard_ops.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/cc/framework/gradients.h"
#include "Model.h"

using namespace ops;

Model::Model(int input_size, int layer1_size, int layer2_size, int output_size)
{
    x = Placeholder(scope, DT_FLOAT);
    y = Placeholder(scope, DT_FLOAT);

    assign_weights(input_size, layer1_size, layer2_size, output_size);
    assign_biases(input_size, layer1_size, layer2_size, output_size);

    layer_1 = Tanh(scope, Tanh(scope, Add(scope, MatMul(scope, x, w1), b1)));
    layer_2 = Tanh(scope, Add(scope, MatMul(scope, layer_1, w2), b2));
    layer_3 = Tanh(scope, Add(scope, MatMul(scope, layer_2, w3), b3));

    Output regularization = AddN(scope,
                         std::initializer_list<Input>{L2Loss(scope, w1),
                                                 L2Loss(scope, w2),
                                                 L2Loss(scope, w3)});
    loss = Add(scope, ReduceMean(scope, Square(scope, Sub(scope, layer_3, y)), {0, 1}),
              Mul(scope, Cast(scope, 0.01,  DT_FLOAT), regularization));

    TF_CHECK_OK(AddSymbolicGradients(scope, {loss}, {w1, w2, w3, b1, b2, b3}, &grad_outputs));

    apply_w1 = ApplyGradientDescent(scope, w1, Cast(scope, 0.01,  DT_FLOAT), {grad_outputs[0]});
    apply_w2 = ApplyGradientDescent(scope, w2, Cast(scope, 0.01,  DT_FLOAT), {grad_outputs[1]});
    apply_w3 = ApplyGradientDescent(scope, w3, Cast(scope, 0.01,  DT_FLOAT), {grad_outputs[2]});

    apply_b1 = ApplyGradientDescent(scope, b1, Cast(scope, 0.01,  DT_FLOAT), {grad_outputs[3]});
    apply_b2 = ApplyGradientDescent(scope, b2, Cast(scope, 0.01,  DT_FLOAT), {grad_outputs[4]});
    apply_b3 = ApplyGradientDescent(scope, b3, Cast(scope, 0.01,  DT_FLOAT), {grad_outputs[5]});


    //model_session = new ClientSession new_model_session(scope);
    ClientSession model_session(scope);
    // init the weights and biases by running the assigns nodes once
    TF_CHECK_OK(model_session.Run({assign_w1, assign_w2, assign_w3, assign_b1, assign_b2, assign_b3}, nullptr));

}

void Model::assign_weights(int input_size, int layer1_size, int layer2_size, int output_size)
{
    w1 = Variable(scope, {input_size, layer1_size}, DT_FLOAT);
    assign_w1 = Assign(scope, w1, RandomNormal(scope, {input_size, layer1_size}, DT_FLOAT));

    w2 = Variable(scope, {layer1_size, layer2_size}, DT_FLOAT);
    assign_w2 = Assign(scope, w2, RandomNormal(scope, {layer1_size, layer2_size}, DT_FLOAT));

    w3 = Variable(scope, {layer2_size, output_size}, DT_FLOAT);
    assign_w3 = Assign(scope, w3, RandomNormal(scope, {layer2_size, output_size}, DT_FLOAT));
}

void Model::assign_biases(int input_size, int layer1_size, int layer2_size, int output_size)
{
    b1 = Variable(scope, {1, layer1_size}, DT_FLOAT);
    assign_b1 = Assign(scope, b1, RandomNormal(scope, {1, layer1_size}, DT_FLOAT));

    b2 = Variable(scope, {1, layer2_size}, DT_FLOAT);
    assign_b2 = Assign(scope, b2, RandomNormal(scope, {1, layer2_size}, DT_FLOAT));

    b3 = Variable(scope, {1, output_size}, DT_FLOAT);
    assign_b3 = Assign(scope, b3, RandomNormal(scope, {1, output_size}, DT_FLOAT));
}

void Model::fit(Tensor x_data, Tensor y_data)
{
    ClientSession model_session(scope);
    for (int i = 0; i < 5000; ++i) {
    if (i % 100 == 0) {
        TF_CHECK_OK(model_session.Run({{x, x_data}, {y, y_data}}, {loss}, &outputs));
        std::cout << "Loss after " << i << " steps " << outputs[0].scalar<float>() << std::endl;
    }
    TF_CHECK_OK(model_session.Run({{x, x_data}, {y, y_data}}, {apply_w1, apply_w2, apply_w3, apply_b1, apply_b2, apply_b3}, nullptr));
    }

}

void Model::predict(Tensor x_data)
{
    ClientSession model_session(scope);
    TF_CHECK_OK(model_session.Run({{x, {x_data}}}, {layer_3}, &outputs));
    std::cout << "DNN output: " << *outputs[0].scalar<float>().data() << std::endl;
    //std::cout << "Price predicted " << data_set.output(*outputs[0].scalar<float>().data()) << " euros" << std::endl;
}

void Model::saveModel()
{
    std::cout << 1;
    //GraphDef graph_def;
    //TF_ASSERT_OK(scope.ToGraphDef(&graph_def));
}

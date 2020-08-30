#ifndef MODEL_H
#define MODEL_H


class Model
{
    public:
        int train(int input, int labels);
        int predict(int input);

        /** Default constructor */
        Model();
        /** Default destructor */
        virtual ~Model();

    private:
        int first_layer_size = 1000;
        int input_size = 20;
        int output_size = 1;
};

#endif // MODEL_H

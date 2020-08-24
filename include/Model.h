#ifndef MODEL_H
#define MODEL_H


class Model
{
    public:
        void train();
        void predict();

        /** Default constructor */
        Model();
        /** Default destructor */
        virtual ~Model();

    protected:

    private:
        int first_layer_size = 1000;
        int input_size = 20;
        int output_size = 1;

        void input;
        void labels;
};

#endif // MODEL_H

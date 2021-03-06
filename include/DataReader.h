#include <string>
#include <fstream>
#include <vector>
#include <utility>
#include <stdexcept>
#include <sstream>
#include <iostream>
#ifndef DATAREADER_H
#define DATAREADER_H


class DataReader
{
    public:
        DataReader(char delimeter_, int data_cols_);
        /// Pobiera wszystkie linie z pliku i zwraca wektor, którego elementami są wektory reprezentujące każdy wiersz pliku.
        std::vector<std::vector<float>> read_file(std::string filepath);
        std::vector<std::vector<float>> read_read_sample(std::string filepath);

    protected:
        char delimeter;
        int data_cols;
        std::string file_type;

        /// Sprawdza czy istnieje i otwiera plik.
        std::ifstream get_file(std::string filepath);
};

#endif // DATAREADER_H

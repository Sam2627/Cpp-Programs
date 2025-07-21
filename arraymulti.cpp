#include <iostream>
#include <string>

int main()
{
    std::string matrix[4][3] = {{"A", "B", "C"},
                                {"D", "E", "F"},
                                {"G", "H", "I"},
                                {"J", "K", "L"}};

    // std::cout << matrix[0][0] << " ";
    // std::cout << matrix[0][1] << " ";
    // std::cout << matrix[1][1] << " ";
    // std::cout << std::endl;

    std::cout << "***********************************" << std::endl;
    // Caculator rows and columns of matrix
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    std::cout << "The matrix have: " << rows << " rows" << std::endl;
    std::cout << "The matrix have: " << cols << " columns" << std::endl;

    std::cout << "***********************************" << std::endl;
    std::cout << "The whole matrix : " << std::endl;
    for (auto &row : matrix)
    {
        for (auto x : row)
        {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }

    // Return memory address
    std::cout << "***********************************" << std::endl;
    for (auto row : matrix)
    {
        std::cout << row << " ";
    }
}
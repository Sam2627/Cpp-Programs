#include <iostream>
#include <vector>
#include <algorithm>

// Sort each row of matrix separate not whole matrix

void sortMatrixLine(std::vector<std::vector<int>> &matrix);

int main()
{
    std::vector<std::vector<int>> matrix{{1, 5, 4}, {5, 3, 7}, {2, 8, 6}};
    std::cout << "Unsort matrix" << std::endl;
    for (auto &row : matrix)
    {
        for (int x : row)
        {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }

    sortMatrixLine(matrix);
    std::cout << "********************************" << std::endl;
    std::cout << "Sort matrix" << std::endl;
    for (auto &row : matrix)
    {
        for (int x : row)
        {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

void sortMatrixLine(std::vector<std::vector<int>> &matrix)
{
    std::vector<int> temp;
    int rowN = 0;

    // Get each row and sort them

    for (auto &row : matrix)
    {
        for (int x : row)
        {
            temp.push_back(x);              // Get element in row
            sort(temp.begin(), temp.end()); // Sort the row
            matrix[rowN] = temp;
        }

        temp.clear(); // Clear temp row
        rowN++;
    }
}
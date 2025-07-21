#include <iostream>
#include <vector>
#include <algorithm>

// Sort matrix m x n
void sortMatrix(std::vector<std::vector<int>> &matrix);

int main()
{
    std::vector<std::vector<int>> matrix{{1, 5, 4}, {2, 3, 7}, {2, 8, 6}};
    std::cout << "Unsort matrix" << std::endl;
    for (auto &row : matrix)
    {
        for (int x : row)
        {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }

    sortMatrix(matrix);
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

void sortMatrix(std::vector<std::vector<int>> &matrix)
{
    std::vector<int> temp;

    // Collect all elements in a temporary vector
    for (auto &row : matrix)
    {
        for (int x : row)
        {
            temp.push_back(x);
        }
    }

    // Sort the vector
    sort(temp.begin(), temp.end());

    // Put sorted values back into the matrix
    int k = 0;
    for (auto &row : matrix)
    {
        for (int &x : row)
        {
            x = temp[k++];
        }
    }
}
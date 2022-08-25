#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    vector<pair<int, int>> LocationsOfZeroes;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                LocationsOfZeroes.push_back(make_pair(i, j));
            }
        }
    }

    for (int i = 0; i < LocationsOfZeroes.size(); i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            matrix[LocationsOfZeroes[i].first][j] = 0;
        }
        for (int k = 0; k < rowSize; k++)
        {
            matrix[k][LocationsOfZeroes[i].second] = 0;
        }
    }
}

// without using space
void setZeroes2(vector<vector<int>> &matrix)
{
    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    // traversing the top row and noting if it contains any '0' in it
    bool doesFirstRowContainsZero = false;
    for (int i = 0; i < colSize; i++)
    {
        if (matrix[0][i] == 0)
        {
            doesFirstRowContainsZero = true;
        }
    }

    // traversing first colums and noting if it contains any '0' in it
    bool doesFirstColContainsZero = false;
    for (int i = 0; i < rowSize; i++)
    {
        if (matrix[i][0] == 0)
        {
            doesFirstColContainsZero = true;
        }
    }

    // traversing the matrix but skipping first row and first column, and noting does the given element is zero or not using the first row and first column
    for (int i = 1; i < rowSize; i++)
    {
        for (int j = 1; j < colSize; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // traversing the matrix in similar way
    for (int i = 1; i < rowSize; i++)
    {
        for (int j = 1; j < colSize; j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // if original first row contained any '0'  then make whole first row '0'
    if (doesFirstRowContainsZero == true)
    {
        for (int i = 0; i < colSize; i++)
        {
            matrix[0][i] = 0;
        }
    }

    // if original first column contained any '0'  then make whole first column '0'
    if (doesFirstColContainsZero == true)
    {
        for (int i = 0; i < rowSize; i++)
        {
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4, 5}, {6, 0, 8, 0, 10}, {11, 12, 13, 14, 15}, {0, 17, 0, 19, 20}, {21, 22, 23, 24, 25}};
    setZeroes2(matrix);

    return 0;
}
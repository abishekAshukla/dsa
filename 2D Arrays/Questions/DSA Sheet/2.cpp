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

void printVector(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4, 5}, {6, 0, 8, 0, 10}, {11, 12, 13, 14, 15}, {16, 17, 0, 19, 20}, {21, 22, 23, 24, 25}};
    printVector(matrix);
    setZeroes(matrix);
    printVector(matrix);

    return 0;
}
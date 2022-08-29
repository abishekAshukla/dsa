#include <iostream>
#include <vector>
using namespace std;

// you have already solved it, but this solution is simpler

void transposeOfMatrix(vector<vector<int>> &matrix)
{
    int size = matrix.size(); // it's a n X n matrix

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void reverseRowsOFMatrix(vector<vector<int>> &matrix)
{
    int size = matrix.size();
    for (int i = 0; i < size; i++)
    {
        int j = 0, k = size - 1;
        while (j <= k)
        {
            swap(matrix[i][j], matrix[i][k]);
            j++;
            k--;
        }
    }
}

void rotate(vector<vector<int>> &matrix)
{
    transposeOfMatrix(matrix);
    reverseRowsOFMatrix(matrix);
}

void printMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {{5,1,9,11}, {2,4,8,10}, {13,3,6,7}, {15,14,12,16}};
    printMatrix(matrix);
    rotate(matrix);
    printMatrix(matrix);
    return 0;
}
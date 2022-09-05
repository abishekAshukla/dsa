#include <iostream>
using namespace std;

int main()
{

    int numberOfRows;
    cout << "Enter number of rows in matrix" << endl;
    cin >> numberOfRows;
    int **matrix = new int *[numberOfRows];

    for (int i = 0; i < numberOfRows; i++)
    {
        cout << "Enter size of row no " << i + 1 << endl;
        int currentRowSize;
        cin >> currentRowSize;
        matrix[i] = new int[currentRowSize];
    }

    for (int i = 0; i < numberOfRows; i++)
    {
        int currentRowSize = sizeof(matrix[i]) / sizeof(int);
        cout << "Enter row number " << i + 1 << endl;
        for (int j = 0; j < currentRowSize; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
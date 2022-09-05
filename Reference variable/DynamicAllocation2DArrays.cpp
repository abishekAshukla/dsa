#include <iostream>
using namespace std;
// Creating Dynamic Matrix
int main()
{
    int m, n;
    cin >> m >> n;
    int **matrix = new int *[m]; // array of rows

    for (int i = 0; i < m; i++)
    {
        matrix[i] = new int[n]; //adding individual rows in array of rows
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // How to delete a dynamic matrix:

    // deleting each row of matrix: step 1
    for (int i = 0; i < m; i++)
    {
        delete[] matrix[i];
    }
    // deletitng array of rows: step 2
    delete[] matrix;

    return 0;
}
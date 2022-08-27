#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

vector<int> commonElements(vector<vector<int>> &matrix)
{
    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    // for (int i = 0; i < colSize; i++)
    // {
    // traversing all the rows and finding which row contains max value at it's last position
    int maxLastValueOfColumn = matrix[0][matrix[0].size() - 1];
    int maxLastValueOfColumnLocation = 0; // row number of row containing max value at last position

    for (int i = 0; i < rowSize; i++)
    {
        int lastElementIndex = matrix[i].size() - 1;
        if (matrix[i][lastElementIndex] > maxLastValueOfColumn)
        {
            maxLastValueOfColumn = matrix[i][lastElementIndex];
            maxLastValueOfColumnLocation = i;
        }
    }
    matrix[maxLastValueOfColumnLocation].pop_back();
    printVector(matrix);
}
// }

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5, 12},
        {2, 4, 5, 15},
        {3, 5, 7, 9, 11},
        {1, 3, 5},
    };
    ;

    commonElements(matrix);
    return 0;
}
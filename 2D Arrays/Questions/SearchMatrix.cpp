#include <iostream>
#include <vector>
using namespace std;
// Binary search in 2D Array

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    int start = 0;
    int end = (rowSize * colSize) - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (matrix[mid / colSize][mid % colSize] == target)
        {
            return true;
        }
        else if (target > matrix[mid / colSize][mid % colSize])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix;
    return 0;
}
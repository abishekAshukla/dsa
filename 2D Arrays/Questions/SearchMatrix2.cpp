// https://leetcode.com/problems/search-a-2d-matrix-ii/

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    int rowIndex = 0;
    int colIndex = colSize - 1;
    // starting search from element in first row and last column
    while (rowIndex < rowSize && colIndex >= 0)
    {
        if (matrix[rowIndex][colIndex] == target)
        {
            return true;
        }
        else if (matrix[rowIndex][colIndex] > target)
        {
            colIndex--; // target does not exist in this column because all further elements in this colums are greater than target
        }
        else
        {
            rowIndex++; // target does not exist in this row because, in current row, elements which are before currentIndex are smaller and we have been checking in elements further of currentIndex
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix;
    return 0;
}
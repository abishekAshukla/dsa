#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int rowSize = matrix.size();
    int colSize = matrix[0].size();
    vector<int> ans;

    // exception handling
    if (rowSize == 0)
        return ans;

    int leftCol = 0, rightCol = colSize - 1, topRow = 0, bottomRow = rowSize - 1, direction = 0;
    while (leftCol <= rightCol && topRow <= bottomRow)
    {
        if (direction == 0) // printing top row
        {
            for (int i = leftCol; i <= rightCol; i++)
            {
                ans.push_back(matrix[topRow][i]);
            }
            topRow++;
            direction = 1;
        }
        else if (direction == 1) // printing right column
        {
            for (int i = topRow; i <= bottomRow; i++)
            {
                ans.push_back(matrix[i][rightCol]);
            }
            rightCol--;
            direction = 2;
        }
        else if (direction == 2) // printing bottom row
        {
            for (int i = rightCol; i >= leftCol; i--)
            {
                ans.push_back(matrix[bottomRow][i]);
            }
            bottomRow--;
            direction = 3;
        }
        else if (direction == 3)  // printing left column
        {
            for (int i = bottomRow; i >= topRow; i--)
            {
                ans.push_back(matrix[i][leftCol]);
            }
            leftCol++;
            direction = 0;
        }
    }
    return ans;
}

int main()
{

    return 0;
}
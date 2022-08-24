#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &v)
{
    int start = 0;
    int end = v.size() - 1;
    while (start <= end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

vector<int> findDiagonalOrder(vector<vector<int>> &mat)
{
    vector<int> ans;

    int rowSize = mat.size();
    int colSize = mat[0].size();
    bool alternate = false; // it is used to alter the direction of diagonal

    if (rowSize == 1) // exception case for current solution
        return mat[0];

    // printing all the diagonals which starts from left most column
    for (int i = 0; i < rowSize; i++)
    {
        int row = i;
        int col = 0;

        vector<int> temp; // stores current diagonal

        while (row >= 0)
        {
            if (col > (colSize - 1))
            {
                break;
            }
            temp.push_back(mat[row][col]);
            row--;
            col++;
        }

        // identifying in which direction to print diagonal
        if (alternate == true)
        {
            reverseVector(temp);
            alternate = false;
        }
        else
        {
            alternate = true;
        }

        // pushing the current diagonal in ans
        for (int i = 0; i < temp.size(); i++)
        {
            ans.push_back(temp[i]);
        }
    }

    // printing all the diagonals which starts from bottom most row
    for (int i = 1; i < colSize; i++)
    {
        int row = rowSize - 1;
        int col = i;
        vector<int> temp;
        while (col < colSize)
        {
            if (row < 0)
            {
                break;
            }

            temp.push_back(mat[row][col]);
            row--;
            col++;
        }
        if (alternate == true)
        {
            reverseVector(temp);
            alternate = false;
        }
        else
        {
            alternate = true;
        }

        for (int i = 0; i < temp.size(); i++)
        {
            ans.push_back(temp[i]);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> quest = {{00, 01, 02, 03, 04}, {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24}, {30, 31, 32, 33, 34}, {40, 41, 42, 43, 44}};

    return 0;
}
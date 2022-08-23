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
    bool alternate = false;

    for (int i = 0; i < rowSize; i++)
    {
        int row = i;
        int col = 0;
        vector<int> temp;
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

    for (int i = 1; i < colSize; i++)
    {
        int row = rowSize - 1;
        int col = i;
        vector<int> temp;
        while (col < colSize)
        {
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
    // vector<vector<int>> quest = {{00, 01, 02, 03}, {10, 11, 12, 13}, {20, 21, 22, 23}};
    // vector<vector<int>> quest = {{00, 01, 02}, {10, 11, 12}, {20, 21, 22}, {30, 31, 32}};
    vector<int> ans = findDiagonalOrder(quest);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
// https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?leftPanelTab=1
#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    int alterNate = true;
    for (int i = 0; i < mCols; i++)
    {
        if (alterNate == true)
        {
            for (int j = 0; j < nRows; j++)
            {
                ans.push_back(arr[j][i]);
            }
            alterNate = false;
        }
        else
        {
            for (int j = nRows - 1; j >= 0; j--)
            {
                ans.push_back(arr[j][i]);
            }
            alterNate = true;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 5}, {4, 5, 6, 11}, {7, 8, 9, 10}};
    wavePrint(arr, 3, 4);
    return 0;
}
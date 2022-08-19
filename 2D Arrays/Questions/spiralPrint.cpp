#include <iostream>
#include <vector>
using namespace std;

int rowLeftToRight(vector<vector<int>> &matrix, int iterationNumber, vector<int> &ans)
{
    int rowSize = matrix[0].size();
    for (int i = iterationNumber - 1; i < rowSize - iterationNumber; i++)
    {
        // cout << matrix[iterationNumber - 1][i] << " ";
        // if (ans.size() <= (matrix.size() * matrix[0].size()))
        // {
            ans.push_back(matrix[iterationNumber - 1][i]);
        // }
    }
}

int rowRightToLeft(vector<vector<int>> &matrix, int iterationNumber, vector<int> &ans)
{
    int rowSize = matrix[0].size();
    int colSize = matrix.size();
    for (int i = rowSize - iterationNumber; i > iterationNumber - 1; i--)
    {
        // cout << matrix[colSize - iterationNumber][i] << " ";
        // if (ans.size() <= (matrix.size() * matrix[0].size()))
        // {

            ans.push_back(matrix[colSize - iterationNumber][i]);
        // }
    }
}

int colTopToBottom(vector<vector<int>> &matrix, int iterationNumber, vector<int> &ans)
{
    int colSize = matrix.size();
    int rowSize = matrix[0].size();
    for (int i = iterationNumber - 1; i < colSize - iterationNumber; i++)
    {
        // cout << matrix[i][rowSize - iterationNumber] << " ";
        // if (ans.size() <= (matrix.size() * matrix[0].size()))
        // {

            ans.push_back(matrix[i][rowSize - iterationNumber]);
        // }
    }
}

int colBottomToTop(vector<vector<int>> &matrix, int iterationNumber, vector<int> &ans)
{
    int colSize = matrix.size();
    for (int i = colSize - iterationNumber; i > iterationNumber - 1; i--)
    {
        // cout << matrix[i][iterationNumber - 1] << " ";
        // if (ans.size() <= (matrix.size() * matrix[0].size()))
        // {

            ans.push_back(matrix[i][iterationNumber - 1]);
        // }
    }
}

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    for (int i = 1; i <= rowSize; i++)
    {
        rowLeftToRight(matrix, i, ans);
        colTopToBottom(matrix, i, ans);
        rowRightToLeft(matrix, i, ans);
        colBottomToTop(matrix, i, ans);
    }
    return ans;
}

int main()
{
    // vector<vector<int>> question = {{00, 01, 02, 03, 04, 05}, {10, 11, 12, 13, 14, 15}, {20, 21, 22, 23, 24, 25}, {30, 31, 32, 33, 34, 35}, {40, 41, 42, 43, 44, 45}, {50, 51, 52, 53, 54, 55}};
    // vector<vector<int>> question = {{00, 01, 02, 03, 04}, {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24}, {30, 31, 32, 33, 34}};
    vector<vector<int>> question = {{4, 4, 6},
                                    {30, 20, 9},
                                    {12, 19, 3}};

    vector<int> ans = spiralOrder(question);
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl
         << ans.size();

    return 0;
}
// https://leetcode.com/problems/spiral-matrix-ii/
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> generateMatrix(int n)
{
    // creating a vector to store matrix
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        vector<int> tempRow;
        for (int j = 0; j < n; j++)
        {
            tempRow.push_back(0);
        }
        ans.push_back(tempRow);
    }

    int leftCol = 0, rightCol = n - 1, topRow = 0, bottomRow = n - 1, direction = 0;
    int iterator = 1;
    while (leftCol <= rightCol && topRow <= bottomRow)
    {
        if (direction == 0)
        {
            for (int i = leftCol; i <= rightCol; i++)
            {
                ans[topRow][i] = iterator;
                iterator++;
            }
            topRow++;
            direction = 1;
            // iterator++;
        }
        else if (direction == 1)
        {
            for (int i = topRow; i <= bottomRow; i++)
            {
                ans[i][rightCol] = iterator;
                iterator++;
            }
            rightCol--;
            direction = 2;
        }
        else if (direction == 2)
        {
            for (int i = rightCol; i >= leftCol; i--)
            {
                ans[bottomRow][i] = iterator;
                iterator++;
            }
            bottomRow--;
            direction = 3;
        }
        else if (direction == 3)
        {
            for (int i = bottomRow; i >= topRow; i--)
            {
                ans[i][leftCol] = iterator;
                iterator++;
            }
            leftCol++;
            direction = 0;
        }
    }

    return ans;
}

int main()
{
    generateMatrix(5);
    // printVector(ans);

    return 0;
}
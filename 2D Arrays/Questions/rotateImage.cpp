#include <iostream>
#include <vector>
using namespace std;

void storeLeftRowInTemp(vector<vector<int>> &image, vector<int> &temp, int iternationNumber)
{
    for (int i = iternationNumber - 1; i <= image.size() - iternationNumber; i++)
    {
        temp.push_back(image[i][iternationNumber - 1]);
    }
}

void replaceLeftColWithBottomRow(vector<vector<int>> &image, int iterationNumber)
{
    for (int i = iterationNumber - 1, j = iterationNumber - 1; i <= image.size() - iterationNumber, j <= image.size() - iterationNumber; i++, j++)
    {
        image[i][iterationNumber - 1] = image[image.size() - iterationNumber][j];
    }
}

void replaceBottomRowWithRightCol(vector<vector<int>> &image, int iterationNumber)
{
    for (int i = image.size() - iterationNumber, j = iterationNumber - 1; i >= iterationNumber - 1, j <= image.size() - iterationNumber; i--, j++)
    {
        image[image.size() - iterationNumber][j] = image[i][image.size() - iterationNumber];
    }
}

void replaceRightColWithTopRow(vector<vector<int>> &image, int iterationNumber)
{
    int size = image.size();
    for (int i = size - iterationNumber, j = size - iterationNumber; i < iterationNumber - 1, j >= iterationNumber - 1; i--, j--)
    {
        // cout<<image[j][size - iterationNumber]<<" ";
        image[j][size - iterationNumber] = image[iterationNumber - 1][i];
    }
}

void replaceTopRowWithTemp(vector<vector<int>> &image, int iterationNumber, vector<int> &temp)
{
    int size = image.size();
    for (int i = size - iterationNumber, j = 0; i >= iterationNumber - 1, j < temp.size(); i--, j++)
    {
        image[iterationNumber - 1][i] = temp[j];
    }
    temp.clear();
}

void printImage(vector<vector<int>> &image)
{
    for (int i = 0; i < image.size(); i++)
    {
        for (int j = 0; j < image.size(); j++)
        {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void rotate(vector<vector<int>> &image)
{
    int size = image.size();
    for (int itera = 1; itera <= (size / 2); itera++)
    {
        vector<int> temp;
        storeLeftRowInTemp(image, temp, itera);
        replaceLeftColWithBottomRow(image, itera);
        replaceBottomRowWithRightCol(image, itera);
        replaceRightColWithTopRow(image, itera);
        replaceTopRowWithTemp(image, itera, temp);
    }
}

int main()
{
    // vector<vector<int>> image = {{69, 1, 2, 3, 4}, {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24}, {30, 31, 32, 33, 34}, {40, 41, 42, 43, 44}};
    // vector<vector<int>> image = {{69, 1, 2, 3, 4, 5}, {10, 11, 12, 13, 14, 15}, {20, 21, 22, 23, 24, 25}, {30, 31, 32, 33, 34, 35}, {40, 41, 42, 43, 44, 45}, {50, 51, 52, 53, 54, 55}};
    vector<vector<int>> image = {{69, 1, 2, 3}, {10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};
    printImage(image);
    rotate(image);
    printImage(image);
    return 0;
}
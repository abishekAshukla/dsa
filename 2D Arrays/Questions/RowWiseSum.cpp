#include <iostream>
using namespace std;

int rowWiseSum(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int sumR = 0;
        for (int j = 0; j < 3; j++)
        {
            sumR += arr[i][j];
        }
        cout << sumR << endl;
    }
}

int colWiseSum(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int sumR = 0;
        for (int j = 0; j < 3; j++)
        {
            sumR += arr[j][i];
        }
        cout << sumR << endl;
    }
}

int largestSumRow(int arr[3][3])
{
    int largestRow = -1;
    int largestSumOfrow = -1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int sumR = 0;
        for (int j = 0; j < 3; j++)
        {
            sumR += arr[i][j];
        }
        if (sumR > largestSumOfrow)
        {
            largestSumOfrow = sumR;
            largestRow = i;
        }
    }
    return largestRow;
}

int main()
{
    int arr[3][3];
    // rowWiseSum(arr);
    // colWiseSum(arr);
    cout << largestSumRow(arr);
    return 0;
}
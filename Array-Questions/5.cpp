#include <iostream>
using namespace std;
// https://www.codingninjas.com/codestudio/problems/pair-sum_697295

// You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

int findPairSum(int arr[], int n, int s)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                cout << arr[i] << " , " << arr[j] << endl;
            }
        }
    }
}

int main()
{
    int arr1[] = {2, -3, 3, -3, -2};
    int size1 = sizeof(arr1) / sizeof(int);
    int s = 0;

    findPairSum(arr1, size1, s);

    return 0;
}

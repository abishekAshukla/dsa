#include <iostream>
using namespace std;
// https://www.codingninjas.com/codestudio/problem-details/triplets-with-given-sum_893028

// You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.

int findPairSum(int arr[], int n, int s)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    cout << arr[i] << " , " << arr[j] << " , " << arr[k] << endl;
                }
            }
        }
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 2};
    int size1 = sizeof(arr1) / sizeof(int);
    int s = 9;

    findPairSum(arr1, size1, s);

    return 0;
}

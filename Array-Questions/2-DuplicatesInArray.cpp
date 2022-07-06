// Find duplicates in an array
// https://www.codingninjas.com/codestudio/problem-details/find-duplicate-in-array_1112602

#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n)
{
    int sumOfOneToNMinusOne = ((n - 1) * n) / 2;
    int sumOfArrayElements = arr[0];
    for (int i = 1; i < n; i++)
    {
        sumOfArrayElements += arr[i];
    }
    return sumOfArrayElements - sumOfOneToNMinusOne;
}

int findDuplicate2(int arr[], int n)
{
    /*
    Logic:
    1,2,3,4,5,5,  1,2,3,4,5 = (1^1) ^ (2^2) ^ (3^3) ^ (4^4) ^ (5^5) ^ 5 = 5
    */
    int ans = 0;
    // XOR all array elements
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR 1 to n-1
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int arr[] = {5, 4, 1, 2, 3, 5};
    int sizeOfArr = sizeof(arr) / sizeof(int);
    cout << findDuplicate2(arr, sizeOfArr);

    return 0;
}

#include <iostream>
using namespace std;

void maxSubArr(int arr[], int size)
{
    int maxSum = 0;
    int currentSum = 0;

    for (int i = 0; i < size; i++)
    {
        currentSum = currentSum + arr[i];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "Sum of elements of maximum subarray is " << maxSum << endl;
}

int main()
{
    int arr[] = {5,4,-1,7,8};
    int size = sizeof(arr) / sizeof(int);
    maxSubArr(arr, size);
    return 0;
}
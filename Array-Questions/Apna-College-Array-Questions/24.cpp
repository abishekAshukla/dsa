#include <iostream>
using namespace std;

void maxSubArr(int arr[], int size)
{
    int maxProd = -9999;
    int currentProd = 1;

    for (int i = 0; i < size; i++)
    {

        currentProd = currentProd * arr[i];
        if (currentProd > maxProd)
        {
            maxProd = currentProd;
        }
        if (currentProd <= 0)
        {
            currentProd = 1;
        }
    }
    cout << "Sum of elements of maximum subarray is " << maxProd << endl;
}

int main()
{
    int arr[] = {2, 3, 4, 0, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    maxSubArr(arr, size);
    return 0;
}
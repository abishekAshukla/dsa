#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
    /*
    Logic: since XOR is associative and commutative, we can,
    2^5^9^2^5 = 9 ^ (2^2) ^ (5^5) = 9 ^ 0 ^ 0 = 9
    */
}

int main()
{
    int arr[] = {2, 5, 9, 2, 5};
    int sizeOfArray = sizeof(arr) / sizeof(int);
    cout<<findUnique(arr, sizeOfArray);
    return 0;
}

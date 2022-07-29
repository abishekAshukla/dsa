#include <iostream>
#include <queue>
using namespace std;

int smallest(int arr[], int size, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < size; i++)
    {
        pq.push(arr[i]);
    }
    for (int i = 0; i < k - 1; i++)
    {
        pq.pop();
    }
    return pq.top();
}

int main()
{
    int arr[] = {7, 10, 4, 20, 15};
    int size = sizeof(arr) / sizeof(int);
    cout << smallest(arr, size, 4);
    return 0;
}

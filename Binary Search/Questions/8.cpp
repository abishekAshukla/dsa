#include <iostream>
using namespace std;

// n = number of stalls
// k = number of cows
// stalls[] contain coordinates of all stalls in increasing order

bool canPlaceCows(int stalls[], int n, int k, int mid)
{
    int cowCount = 1;
    int positionOfCurrentCow = stalls[0];

    for (int i = 1; i < n; i++)
    {
        if ((stalls[i] - positionOfCurrentCow) >= mid)
        {
            cowCount++;
            positionOfCurrentCow = stalls[i];
        }

        if (cowCount == k) // all the cows have been allotted
        {
            return true;
        }
    }
    return false; // even after checking for all the stalls, some cows still are not allotted
}

int aggressiveCows(int stalls[], int n, int k)
{

    int start = stalls[1] - stalls[0];
    int end = stalls[n - 1] - stalls[0];
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (canPlaceCows(stalls, n, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    return 0;
}

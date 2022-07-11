#include <iostream>
using namespace std;

// n = number of stalls
// k = number of cows
// stalls[] contain coordinates of all stalls in increasing order

bool canPlaceCows(int stalls[], int n, int k, int mid) // this function tells, if we keep minimal distance between any two cows as 'mid' then will all cows will be succesfully allotted or not
{
    int cowCount = 1;
    int positionOfCurrentCow = stalls[0]; // First cow will be at first stall

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
    // stalls[] should be sorted in ascending order
    int start = stalls[1] - stalls[0];  // miniumum distance between any two cows possible
    int end = stalls[n - 1] - stalls[0]; // maximum distance between any two cows possible
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (canPlaceCows(stalls, n, k, mid))
        {
            ans = mid;
            start = mid + 1;
            // since, we want to find largest value so we will store the answer and search on right side of the search space
        }
        else
        {
            end = mid - 1;
            // possible answer can not be present on the right side of search space (greater values than current mid)
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    return 0;
}

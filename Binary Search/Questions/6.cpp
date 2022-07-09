// Find square root of given number using binary search

#include <iostream>
using namespace std;

int sqroot(int val)
{
    int start = 0;
    int end = val;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        int square = mid * mid;
        if (square == val)
        {
            ans = mid;
        }
        if (square < val)
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
    cout << sqroot(65);
    return 0;
}

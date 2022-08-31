#include <iostream>
using namespace std;
// https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?leftPanelTab=1

// find x ^ n
int raisedToThePower(int x, int n)
{
    int ans = 1;

    while (n > 0)
    {
        if (n & 1) // 'n' is odd
        {
            ans = ans * x;
        }
        x = x * x;
        n = n >> 1; // equivalent to 'n/2'
    }
    return ans;
}

long raisedToThePower2(long a, long b, int n) // not understanding this
{
    long ans = 1;

    while (b > 0)
    {
        if (b & 1) // 'n' is odd
        {
            ans = (ans * a % n) % n;
        }
        a = ((a % n) * (a % n)) % n;
        b = b >> 1; // equivalent to 'n/2'
    }
    return ans;
}

int main()
{
    cout << raisedToThePower2(6,2, 3);
    return 0;
}
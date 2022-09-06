#include <iostream>
using namespace std;

// Inline function: Where Inline funcition is used, it will be replaced with the body of inline funciton befor compilation
// So, we can get redeability of using funciton without actually calling a function and using space for it.
// A funciton can be made inline only if its body is lesser than 3 lines

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a, b); 
    cout << ans << endl;

    a += 3;
    b += 1;

    ans = getMax(a, b);
    cout << ans << endl;

    return 0;
}
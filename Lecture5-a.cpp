#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b= 6;

    // Bitwise operators
    cout<<"a&b = "<<(a&b)<<endl;
    cout<<"a|b = "<<(a|b)<<endl;
    cout<<"~a = "<<(~a)<<endl;
    cout<<"a^b = "<<(a^b)<<endl;

    // Left shift operator and right side operator
    cout<<(17>>1)<<endl; // similar to 17/2
    cout<<(17>>2)<<endl; // similar to 17/(2*2)
    cout<<(19<<1)<<endl; // similar to 19*2
    cout<<(21<<2)<<endl; // similar to 21 *2*2
    return 0;
}


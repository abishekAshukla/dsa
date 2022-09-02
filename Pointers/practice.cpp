#include <iostream>
using namespace std;
// https://www.codingninjas.com/codestudio/guided-paths/pointers/content/235644/offering/3169078

int main()
{
    float arr[] = {12.5, 10.3, 12.8};
    float *p1 = &arr[0];
    float *p2 = &arr[1];
    float *p3 = &arr[2];
    cout<<p1<<" "<<p2<<endl;
    cout<<p3-p1<<endl; // observe this output

    return 0;
}
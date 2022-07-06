#include <iostream>
using namespace std;

int main()
{
    // int a  =2;
    // int b = a+1;

    // if ((a=3)==b)
    // {
    //     cout<<a<<endl<<"if is trigirred"<<endl;
    // }
    // else{
    //     cout<<a<<"else is triggered";
    // }
    // cout<<a<<endl<<b<<endl;

    // int c = 24;
    // if (c>20)
    // {
    //     cout<<"Love"<<endl;
    // }
    // else if (c == 24)
    // {
    //     cout<<"Lovely"<<endl;
    // }
    // else
    // {
    //     cout<<"Babbar"<<endl;
    // }
    
    // Find whether given character is of uppercase, lowercase or a number
    // char ch = '8';
    // int checkAsciiVal = (int)ch;
    // if (checkAsciiVal >= 65 && checkAsciiVal <= 90)
    // {
    //     cout<<"UPPER"<<endl;
    // }
    // else if (checkAsciiVal >= 97 && checkAsciiVal <= 122)
    // {
    //     cout<<"LOWER"<<endl;
    // }
    // else{
    //     cout<<"Numerical"<<endl;
    // }
    
    
    // Pattern questions

    // Pattern1
    // int n;
    // cin>>n;

    // int i = 1;

    // while (i<=n)
    // {
    //     int j = 1;
    //     while(j<=n){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;

    //     i++;
    // }

    // Pattern2
    int n;
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while(j<=n){
            cout<<i;
            j++;
        }

        cout<<endl;
        i++;
    }
    
    

    
    return 0;
}

#include <iostream>
using namespace std;
#include <string>
#include <limits.h>

int reverse(int x)
{
    int answer = 0;
    while (x != 0)
    {
        int lastDigit = x % 10;
        if ((answer > INT_MAX / 10) || (answer < INT_MIN / 10)) // it will return '0' if it exceeds integer's range
        {
            return 0;
        }

        answer = (answer * 10) + lastDigit;
        x = x / 10;
    }
    return answer;
}

int main()
{
    // Find reverse of an integer
    // int n;
    // cin>>n;

    // // method 1
    // string reversedString = "";

    // for (int i = n; n > 0; )
    // {
    //     int lastDigit = n%10;
    //     string str = to_string(lastDigit);
    //     reversedString = reversedString+str;
    //     n = n/10;
    // }

    // int reversedInteger = stoi(reversedString);
    // cout<<reversedInteger<<endl;

    // method 2
    // cout<<reverse(n);

    // Check whether the given number is power of 2 or not
    // i.e. if given number comes in following sequence of not , 2, 4, 8, 16, 32, 64,........
    // int n;
    // cin >> n;

    // if (n == 0)  // handling exception case for our logic
    // {
    //     cout << "It does comes in the sequence" << endl;
    // }
    // else
    // {
    //     while (n != 1)
    //     {
    //         int check = n & 1;
    //         if (check == 1)
    //         {
    //             cout << "It does comes in the sequence" << endl;
    //             break;
    //         }

    //         n = n >> 1;
    //     }
    // }

    // Note:
    // Iterating an given integer
    // int n;
    // cin>>n;

    // for (int i = n; n > 0;)
    // {
    //     int lastDigit = n%10;
    //     cout<<lastDigit;
    //     n = n/10;
    // }

    // Iterating binary number of an given integer
    // while (n != 0)
    //     {
    //         int lastDigitOfBinary = n & 1;
    //         cout<<lastDigitOfBinary;
    //         n = n >> 1;
    //     }
    
    return 0;
}

#include <iostream>
using namespace std;

int main()
{

    // find fibonacci series till 10th term
    // int a = 0, b  = 1;
    // // n = (n-1) + (n-2)

    // for (int i = 1; i <= 10; i++)
    // {
    //     int n = a+b;
    //     cout<<n<<" ";
    //     a = b;
    //     b = n;
    // }

    // find whether the given number is prime or not

    // int n;
    // cin >> n;

    // bool isPrime = 1;

    // for (int i = 2; i <= n - 1; i++)
    // {
    //     int moudulus = n % (i);
    //     if (moudulus == 0)
    //     {
    //         isPrime = 0;
    //         break;
    //     }
    // }

    // if (isPrime == 0)
    // {
    //     cout << "Not a prime number" << endl;
    // }
    // else
    // {
    //     cout << "It is a prime number" << endl;
    // }

    // Find sum and multiplication of digits of a given number
    int n = 1234;

    int sum = 0;
    int multiplication = 1;

    for (int i = n; n > 0;)
    {
        int lastDigit = n%10;
        sum += lastDigit;
        multiplication *= lastDigit;
        n = n/10;
    }

    cout<<sum<<endl;
    cout<<multiplication<<endl;
    
    



    return 0;
}

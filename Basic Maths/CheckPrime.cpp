// https://leetcode.com/problems/count-primes/submissions/
// Explanation by love babbar - code help
// HW = segmented sieve
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false; // not a prime number
        }
    }
    return true;
}

// Sieve of Eratosthenes
int countPrimes(int n)
{
    int ans = 0;
    vector<bool> prime(n + 1, true); // creating a array of size n+1 which indicates prime or not for value from '0' to 'n'

    prime[0] = prime[1] = false; // '0' and '1' are not prime numbers

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            ans++;

            for (int j = i * 2; j < n; j = j + i) // marking every number which is multiple of 'i' as no-prime number
            {
                prime[j] = false;
            }
        }
    }
    return ans;
}
// time complexity = O(n*log(log n))


int main()
{
    // cout << isPrime(16);
    cout<<countPrimes(1);
    return 0;
}
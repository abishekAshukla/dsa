#include <iostream>
#include <string>
using namespace std;

string removeConsecutiveCharacter(string S)
{
    string str = "";
    str.push_back(S[0]);

    for (int i = 1; i < S.length(); i++)
    {
        if (S[i] != S[i - 1])
        {
            str.push_back(S[i]);
        }
    }
    return str;
}

int main()
{
    string str = "aabaa";
    cout << removeConsecutiveCharacter(str);
    return 0;
}
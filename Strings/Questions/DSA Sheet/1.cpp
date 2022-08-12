#include <iostream>
#include <string>
using namespace std;

void removeSpacesAndSymbols(string &str)
{
    string ans;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') // convert upper to lower case
        {
            str[i] = tolower(str[i]);
            ans.push_back(str[i]);
            continue;
        }

        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
        {
            ans.push_back(str[i]);
        }
    }
    str = ans;
}

bool isPalindrome(string str)
{
    removeSpacesAndSymbols(str);
    int start = 0;
    int end = str.length() - 1;
    while (start <= end)
    {
        if (str[start] != str[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    string str = " ";
    cout<<isPalindrome(str);
    return 0;
}
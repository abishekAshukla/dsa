#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isSame(char ch1, char ch2) // do given brackets match or not
{
    if (ch1 == '(' && ch2 == ')')
    {
        return true;
    }
    else if (ch1 == '[' && ch2 == ']')
    {
        return true;
    }
    else if (ch1 == '{' && ch2 == '}')
    {
        return true;
    }
    return false;
}

bool checkEven(string str) // checking if length of string is even or not
{
    int remainder = str.length() % 2;
    if (remainder == 0)
    {
        return true;
    }
    return false;
}

bool isValid(string s)
{
    if (checkEven(s) == false)
        return false;

    vector<char> openingBrackets;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] || '[' || s[i] == '{')
        {
            openingBrackets.push_back(s[i]);
        }
        else
        {
            if (openingBrackets.size() == 0)
            {
                return false;
            }
            if (isSame(openingBrackets[openingBrackets.size() - 1], s[i]) == false)
            {
                return false;
            }
        }
    }

    if (openingBrackets.size() == 0)
    {
        return false;
    }

    return true;
}

int main()
{
    string str = "(){";
    // cout << isSame('[', ')');

    // cout << isValid(str);

    vector<char> ch = {'d', 'e'};
    // ch.push_back('f');
    // ch.pop_back();
    // cout<<ch.size();
    // cout << ch[ch.size() - 1];

    cout<<isValid("([");

    return 0;
}
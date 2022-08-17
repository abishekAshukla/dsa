// https://leetcode.com/problems/valid-parentheses/submissions/
// Explanation: striver's video
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

bool isValid(string s)
{
    vector<char> openingBrackets;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            openingBrackets.push_back(s[i]); 
        }
        else
        {
            if (openingBrackets.size() == 0)
            {
                return false; // no need to check further
            }
            if (isSame(openingBrackets[openingBrackets.size() - 1], s[i]) == false)
            {
                return false;
            }
            else
            {
                openingBrackets.pop_back();
            }
        }
    }

    if (openingBrackets.size() != 0) // openingBrackets vector should be empty after traversing given string for valid parenthesses
    {
        return false;
    }

    return true;
}

int main()
{
    string str = "()[]{}";
    cout << isValid(str);

    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string removeDuplicates(string s)
{
    string temp;
    bool containsDup = true;

    while (s.length() != 0 && containsDup == true)
    {
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                temp.push_back(s[i]);
            }
            else
            {
                for (int j = i + 2; j < s.length(); j++)
                {
                    temp.push_back(s[j]);
                }
            }
        }
    }
}

int main()
{
    string str = "abbaca";
    cout << str.length();
    removeDuplicates(str);
    return 0;
}
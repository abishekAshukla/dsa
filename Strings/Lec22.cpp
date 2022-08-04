#include <iostream>
#include <string>
using namespace std;

void reverString(string &str, int start, int end)
{
    // int start = 0;
    // int end = str.length() - 1;
    while (start <= end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

bool validCharacter(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

bool checkPalindrome(string &str)
{
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

void reverseStringContainingSpaces(string &str)
{
    str = str + " "; // adding space in last
    int startWord = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            reverString(str, startWord, i - 1);
            startWord = i + 1;
        }
    }
    str.pop_back(); // removing space in last
}

int main()
{
    string name = "m";
    // cin >> name;
    cout << name << endl;
    reverseStringContainingSpaces(name);
    cout << name << endl;

    return 0;
}
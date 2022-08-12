#include <iostream>
#include <string>
using namespace std;

void sortString(string &str)
{
    int charCount[26] = {0};
    for (int i = 0; i < str.length(); i++)
        charCount[str[i] - 'a']++;

    str.clear();
    for (int i = 0; i < 26; i++)
    {
        if (charCount[i] != 0)
        {
            for (int j = 0; j < charCount[i]; j++)
            {
                str.push_back((char)('a' + i));
            }
        }
    }
}

bool isAnagram(string s, string t)
{
    sortString(s);
    sortString(t);

    if (s == t)
    {
        return true;
    }
    return false;
}

int main()
{
    string str = "acbedgfh";
    cout << isAnagram("rat", "art");
    return 0;
}
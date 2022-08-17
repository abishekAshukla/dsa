#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans = "";

    // find smallest string within the vector
    string smallestStr = strs[0];
    for (int i = 1; i < strs.size(); i++)
    {
        if (strs[i].length() < smallestStr.length())
        {
            smallestStr = strs[i];
        }
    }

    for (int i = 0; i < smallestStr.length(); i++)
    {
        char indexVal = smallestStr[i];

        bool doesContain = true;
        for (int j = 0; j < strs.size(); j++)
        {
            string currentStr = strs[j];
            if (currentStr[i] != indexVal)
            {
                doesContain = false;
                break;
            }
        }

        if (doesContain)
        {
            ans.push_back(smallestStr[i]);
        }
        else
        {
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<string> strVec = {"flower","flow","flight"};

    cout << longestCommonPrefix(strVec);
    return 0;
}
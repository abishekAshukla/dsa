#include <iostream>
#include <vector>
#include <string>
using namespace std;

string printSequence(string S)
{
    string ans;

    vector<pair<char, int>> vec = {
        {'0', 1}, {'2', 1}, {'2', 2}, {'2', 3}, {'3', 1}, {'3', 2}, {'3', 3}, {'4', 1}, {'4', 2}, {'4', 3}, {'5', 1}, {'5', 2}, {'5', 3}, {'6', 1}, {'6', 2}, {'6', 3}, {'7', 1}, {'7', 2}, {'7', 3}, {'7', 4}, {'8', 1}, {'8', 2}, {'8', 3}, {'9', 1}, {'9', 2}, {'9', 3}, {'9', 4}};

    for (int i = 0; i < S.length(); i++)
    {
        int currentCharactersPosition = S[i] - 'a' + 33;
        if (S[i] == ' ')
        {
            currentCharactersPosition = 0;
        }

        for (int i = 0; i < vec[currentCharactersPosition].second; i++)
        {
            ans.push_back(vec[currentCharactersPosition].first);
        }
    }
    return ans;
}

int main()
{
    string str = "HEY U";
    cout<<printSequence(str);

    return 0;
}
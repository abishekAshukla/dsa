// https://www.geeksforgeeks.org/return-maximum-occurring-character-in-the-input-string/#:~:text=Typically%2C%20ASCII%20characters%20are%20256,Hash%20array%20size%20as%20128.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char getMaxCharacter(string s)
{
    int arr[26] = {0}; // all elements are inilized with 0
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }
    // arr[] stores count of each every character ('a' to 'z') in string s
    int maxCount = -1;
    int indexOfMostRepeatedChar = -1;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxCount)
        {
            indexOfMostRepeatedChar = i;
            maxCount = arr[i];
        }
    }
    return indexOfMostRepeatedChar + 'a';
}

int main()
{
    string str = "output";
    cout << getMaxCharacter(str);
    return 0;
}
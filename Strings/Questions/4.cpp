#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool checkPermutation(string s1, string s2)
{

    // character count array
    int count1[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

}

int main()
{
    
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// using space , better time complexity
string replaceSpaces(string &str){
    string ans = "";
    
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            ans.push_back('@');
            ans.push_back('4');
            ans.push_back('0');
        }
        else{
            ans.push_back(str[i]);
        }
    }
    return ans;
}

// without using space, time complexity increases
string replaceSpaces2(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str.push_back('4');
            str.push_back('0');
            for (int j = str.length() - 1; j >= i; j--)
            {
                str[j] = str[j - 2];
            }
            str[i] = '@';
            str[i + 1] = '4';
            str[i + 2] = '0';
            i = i + 2;
        }
    }
    return str;
}

int main()
{
    string str = "my name is khan";
    cout << replaceSpaces2(str);

    return 0;
}
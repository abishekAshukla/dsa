#include <iostream>
#include <string>
using namespace std;
#include <vector>

int concat(string a, string b)
{
    string s = a + b;
    int c = stoi(s);
    return c;
}

bool compare(string x, string y)
{
    int sidha = concat(x, y);
    int ulta = concat(y, x);

    if (sidha > ulta)
        return false;
    else
        return true;
}

string concatAll(vector<string> arr)
{
    string ans;
    for (int i = 0; i < arr.size(); i++)
    {
        ans += arr[i];
    }
    return ans;
}

string printLargest(vector<string> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (compare(arr[j], arr[j + 1]) == true)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return concatAll(arr);
}

int main()
{
    vector<string> vecek = {"54", "546", "548", "60", "7"};
    cout << printLargest(vecek);

    return 0;
}
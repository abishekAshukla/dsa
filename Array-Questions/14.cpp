// https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186

#include <iostream>
using namespace std;
#include <vector>

vector<int> reverse(vector<int> &v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;

    while (i >= 0, j >= 0)
    {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        i--;
        j--;
    }

    // if b gets completed but some values of a is remaning
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        i--;
    }

    // if a gets completed but some values of b is remaning
    while (j >= 0)
    {
        int sum = b[i] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        j--;
    }

    // if a and b both gets completed but value of carry is remaining
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
    }

    return reverse(ans);
}

int main()
{
    vector<int> v1;
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    vector<int> v2;
    v2.push_back(9);
    v2.push_back(9);
    v2.push_back(9);
    vector<int> v3 = findArraySum(v1, 3, v2, 3);
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}

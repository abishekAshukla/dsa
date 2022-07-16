#include <iostream>
using namespace std;
#include <vector>

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int lastIndexoftemp;
    int lastIndexOfa = n - 1;
    int lastIndexOfb = m - 1;

    if (m > n)
    {
        lastIndexoftemp = m - 1;
    }
    else
    {
        lastIndexoftemp = n - 1;
    }
    vector<int> temp(lastIndexoftemp + 1);

    for (int i = 0; i < lastIndexoftemp + 1; i++)
    {
        if (lastIndexOfb < 0)
        {
            lastIndexOfb = 0;
            b[0] = 0;
        }

        if (lastIndexOfa < 0)
        {
            lastIndexOfa = 0;
            a[0] = 0;
        }

        temp[lastIndexoftemp] = a[lastIndexOfa] + b[lastIndexOfb];
        lastIndexOfa--;
        lastIndexOfb--;
        lastIndexoftemp--;
    }

    return temp;
}

int main()
{
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(1);
    vector<int> v3 = findArraySum(v1, 3, v2, 3);
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}

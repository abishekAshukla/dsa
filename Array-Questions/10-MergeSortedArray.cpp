#include <iostream>
#include <vector>
using namespace std;

void mergeSorted(vector<int> &v1, vector<int> &v2)
{
    vector<int> merged;
    int i = 0;
    int j = 0;
    for (i = 0, j = 0; i < v1.size(), j < v2.size();)
    {
        if (v2[j] < v1[i])
        {
            merged.push_back(v2[j]);
            j++;
        }
        else
        {
            merged.push_back(v1[i]);
            i++;
        }
    }
    for (int n = i; n < v1.size(); n++)
    {
        merged.push_back(v1[n]);
    }

    for (int n = j; n < v2.size(); n++)
    {
        merged.push_back(v2[n]);
    }
    // v1 = merged;
    for (int i = 0; i < merged.size(); i++)
    {
        v1.push_back(merged[i]);
    }
}

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(8);

    vector<int> v2;
    v2.push_back(5);
    v2.push_back(7);
    v2.push_back(10);
    v2.push_back(12);
    v2.push_back(13);

    // vector<int> merged = mergeSorted(v1, v2);
    // printVector(merged);
    mergeSorted(v1, v2);
    printVector(v1);
    return 0;
}

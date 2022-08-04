#include <iostream>
using namespace std;
#include <vector>

int minMerge(vector<int> vec)
{
    int start = 0;
    int end = vec.size() - 1;
    int ans = 0;

    while (start < end)
    {
        if (vec[start] == vec[end])
        {
            start++;
            end--;
        }
        else if (vec[start] < vec[end])
        {
            start++;
            vec[start] += vec[start - 1];
            ans++;
        }
        else
        {
            end--;
            vec[end] += vec[end + 1];
            ans++;
        }
    }
    return ans;
}

int main()
{
    vector<int> pali = {1, 4, 5, 1};
    cout << minMerge(pali);

    return 0;
}
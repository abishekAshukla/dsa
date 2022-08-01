#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
{
    int n = intervals.size() - 2;
    sort(intervals.begin(), intervals.end(), greater<>()); // swap in descending order

    for (int i = n; i >= 0; i--)
    {
        if (intervals[i][0] >= intervals[i + 1][0] && intervals[i][0] <= intervals[i + 1][1])
        {
            vector<int> temp;
            temp.push_back(intervals[i + 1][0]);
            temp.push_back(max(intervals[i][1], intervals[i + 1][1]));
            intervals.pop_back();
            intervals.pop_back();
            intervals.push_back(temp);
            continue;
        }

        if (intervals[i][1] >= intervals[i + 1][0] && intervals[i][1] <= intervals[i + 1][1])
        {
            vector<int> temp;
            temp.push_back(intervals[i + 1][0]);
            temp.push_back(max(intervals[i][1], intervals[i + 1][1]));
            intervals.pop_back();
            intervals.pop_back();
            intervals.push_back(temp);
        }
    }

    return intervals;
}
// ^ test cases failed

void printVector(vector<vector<int>> vec)
{

    sort(vec.begin(), vec.end(), greater<>());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i][0] << " " << vec[i][1] << endl;
    }
}

int main()
{
    vector<vector<int>> quest;

    vector<int> v1 = {6, 8};
    quest.push_back(v1);

    vector<int> v2 = {1, 9};
    quest.push_back(v2);

    vector<int> v3 = {2, 4};
    quest.push_back(v3);

    vector<int> v4 = {4, 7};
    quest.push_back(v4);

    // printVector(quest);

    vector<vector<int>> ans = overlappedInterval(quest);
    // quest.reserve();
    printVector(quest);

    return 0;
}
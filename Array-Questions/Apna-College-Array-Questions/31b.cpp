#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// solution: striver youtube (merge overlapping intervals)

vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
{
    vector<vector<int>> mergedIntervals;
    sort(intervals.begin(), intervals.end());
    vector<int> tempInterval = intervals[0];

    for (int i = 0; i < intervals.size(); i++)
    {
        if (tempInterval[0] >= intervals[i][0] && tempInterval[0] <= intervals[i][1])
        {
            tempInterval[1] = max(tempInterval[1], intervals[i][1]);
        }
        else if (tempInterval[1] >= intervals[i][0] && tempInterval[1] <= intervals[i][1])
        {
            tempInterval[1] = max(tempInterval[1], intervals[i][1]);
        }
        else
        {
            mergedIntervals.push_back(tempInterval); // no overlapping condition
            tempInterval[0] = intervals[i][0];
            tempInterval[1] = intervals[i][1];
        }

        // if (intervals[i][0] <= tempInterval[1])
        // {
        //     tempInterval[1] = max(tempInterval[1], intervals[i][1]);
        // }
        //  else
        // {
        //     mergedIntervals.push_back(tempInterval); // no overlapping condition
        // }
    }
    mergedIntervals.push_back(tempInterval);
    return mergedIntervals;
}
// ^ wrong answer coming

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

    vector<vector<int>> ans = overlappedInterval(quest);
    printVector(ans);

    return 0;
}
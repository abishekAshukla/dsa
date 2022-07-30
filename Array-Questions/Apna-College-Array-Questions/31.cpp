#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
{
    // sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (int i = 1; i < intervals.size(); i++)
    {
        if (intervals[i][0] >= intervals[i - 1][0] && intervals[i][0] >= intervals[i - 1][1])
        {
            vector<int> temp;
            temp.push_back(intervals[i - 1][0]);
            temp.push_back(intervals[i][1]);
            ans.push_back(temp);
            continue;
        }

        if (intervals[i][1] >= intervals[i - 1][0] && intervals[i][1] >= intervals[i - 1][1])
        {
            vector<int> temp;
            temp.push_back(intervals[i - 1][0]);
            temp.push_back(intervals[i][1]);
            ans.push_back(temp);
        }
    }
}

void printVector(vector<vector<int>> vec)
{

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i][0] << " " << vec[i][1] << endl;
    }
}

int main()
{
    vector<vector<int>> quest;
    vector<int> p1;
    p1.push_back(1);
    p1.push_back(3);
    quest.push_back(p1);
    vector<int> p2;
    p2.push_back(2);
    p2.push_back(4);
    quest.push_back(p2);
    vector<int> p3;
    p3.push_back(6);
    p3.push_back(8);
    quest.push_back(p3);
    vector<int> p4;
    p4.push_back(9);
    p4.push_back(10);
    quest.push_back(p4);

    vector<int> v2 = {11, 13};
    quest.push_back(v2);

    printVector(quest);
    return 0;
}
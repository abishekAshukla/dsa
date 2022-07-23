#include <iostream>
using namespace std;
#include <queue>

int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < nums.size(); i++)
    {
        pq.push(nums[i]);
    }
    for (int i = 0; i < (k - 1); i++)
    {
        pq.pop();
    }
    return pq.top();
}

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(4);
    cout<<findKthLargest(v,3);
    return 0;
}
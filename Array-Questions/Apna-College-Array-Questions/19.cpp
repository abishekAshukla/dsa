#include <iostream>
using namespace std;
#include <vector>
#include <math.h>
#include <algorithm>

// O(n2)
int maxProfit(vector<int> &prices)
{
    int maxProfit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        for (int j = i + 1; j < prices.size(); j++)
        {
            if ((prices[j] - prices[i]) > maxProfit)
            {
                maxProfit = prices[j] - prices[i];
            }
        }
    }
    return maxProfit;
}

// O(n)
int maxProfit2(vector<int> &prices)
{
    int minimumSoFar = prices[0];
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < minimumSoFar)
        {
            minimumSoFar = prices[i];
        }

        int profit = prices[i] - minimumSoFar;

        if (profit > maxProfit)
        {
            maxProfit = profit;
        }
    }
    return maxProfit;
}

// O(n)
int maxProfit3(vector<int> &prices)
{
    int minimumSoFar = prices[0];
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); i++)
    {
        minimumSoFar = min(minimumSoFar, prices[i]);
        int profit = prices[i] - minimumSoFar;
        maxProfit = max(profit, maxProfit);
    }
    return maxProfit;
}

int main()
{
    vector<int> v;
    v.push_back(7);
    // v.push_back(5);
    v.push_back(6);
    v.push_back(4);
    v.push_back(3);
    v.push_back(1);
    cout << maxProfit3(v);
    return 0;
}
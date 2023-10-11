#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int profit = 0;
    int n = prices.size();
    for (int i = 1; i < n; i++)
        // if todays price is higher -> sell stocks make profit
        if (prices[i] > prices[i - 1])
            profit += prices[i] - prices[i - 1];

    return profit;
}
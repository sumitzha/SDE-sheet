#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minimum = prices[0];
        int maxProfitEarned = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            int currProfit = prices[i] - minimum;
            maxProfitEarned = max(maxProfitEarned, currProfit);
            minimum = min(minimum, prices[i]);
        }
        return maxProfitEarned;
    }
};
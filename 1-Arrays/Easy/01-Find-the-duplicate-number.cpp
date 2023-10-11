#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> mp;

        for (int i : nums)
            mp[i]++;

        for (auto itr : mp)
            if (itr.second > 1)
                return itr.first;

        return 0;
    }
};
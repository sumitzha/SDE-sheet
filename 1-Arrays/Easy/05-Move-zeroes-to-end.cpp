#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int z = 0; // for pointing last zero point 
        for (int i = 0; i < nums.size(); i++)
        { // if current not zero -> swap
            if (nums[i] != 0)
                swap(nums[i], nums[z++]);
        }
    }
};
#include <bits/stdc++.h>
using namespace std;

// simplest approach
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int zeros = 0;
        int ones = 0;
        int twos = 0;
        for (int i : nums)
        {
            if (i == 0)
                zeros++;
            else if (i == 1)
                ones++;
            else if (i == 2)
                twos++;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            while (zeros != 0)
            {
                nums[i] = 0;
                zeros--;
                i++;
            }
            while (ones != 0)
            {
                nums[i] = 1;
                ones--;
                i++;
            }
            while (twos != 0)
            {
                nums[i] = 2;
                twos--;
                i++;
            }
        }
    }
};

// approach using map
class Solution1
{
public:
    void sortColors(vector<int> &nums)
    {
        // arranged in sorted orders
        map<int, int> mp;
        for (auto itr : nums)
            mp[itr]++;
        int i = 0;
        for (auto itr : mp)
        {
            while (itr.second != 0)
            {
                nums[i++] = itr.first;
                itr.second--;
            }
        }
    }
};


// solving using swapping
class Solution3
{
public:
    void sortColors(vector<int> &nums)
    {
        int zeroes = 0, ones = 0, twos = nums.size() - 1;
        while (ones <= twos)
        {
            if (nums[ones] == 0)
            {
                swap(nums[ones], nums[zeroes]);
                zeroes++;
                ones++;
            }
            else if (nums[ones] == 1)
            {
                ones++;
            }
            else
            {
                swap(nums[twos], nums[ones]);
                twos--;
            }
        }
    }
};
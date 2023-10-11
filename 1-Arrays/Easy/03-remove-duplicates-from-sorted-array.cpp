#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        // pointer for start point (since 0th is always taken unique)
        int j = 1;
        // starting from 1->n search for duplicated
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                // shift unique pointer if non-duplicated is found
                nums[j] = nums[i];
                j++;
            }
        }
        return j; // return unique elements found
    }
};
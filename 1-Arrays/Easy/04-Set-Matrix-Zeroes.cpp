#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();    // #rows
        int m = matrix[0].size(); // #coloums

        // make a tracking of zeros (1=> zeroes found)
        vector<int> row(n, 0);
        vector<int> col(m, 0);

        // iterate the matrix and find the zeros position => O(n2)
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    // marking as 1 if zero found in position
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        // iterate the matrix again and if marked 1 put 0 at the position [i][j] => O(n2)
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (row[i] == 1 or col[j] == 1)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
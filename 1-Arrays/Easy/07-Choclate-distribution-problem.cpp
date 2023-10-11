#include <bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m)
{
    sort(a.begin(), a.end());
    int i = 0;         // window start
    int j = i + m - 1; // window ending

    long long ans = INT_MAX;

    while (j < n)
    {
        // gap is always end - start of window (since sorted)
        int gap = a[j++] - a[i++];
        if (gap < ans)
            ans = gap;
    }

    return ans;
}
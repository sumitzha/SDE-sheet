#include <bits/stdc++.h>
using namespace std;

void findDuplicates(string s)
{
    unordered_map<char, int> cnt;
    
    for (auto it : s)
        cnt[it]++;

    for (auto it : cnt)
        if (it.second > 1)
            cout << it.first << " ";
    cout << endl;
}

int main()
{
    string s;
    getline(cin, s);
    findDuplicates(s);
}
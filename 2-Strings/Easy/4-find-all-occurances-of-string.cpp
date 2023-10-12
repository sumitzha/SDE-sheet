#include <bits/stdc++.h>
using namespace std;

vector<int> subStringFind(string s, string subString)
{
    int pos = 0;
    vector<int> ans;

    // find untill end is reached 
    while ((pos = s.find(subString, pos)) != string::npos)
    {
        // push the posn (since u found it u r in loop)
        ans.push_back(pos);
        // jump by length of substring
        pos += subString.length();
    }
    return ans;
}

int main()
{
    string largerString = "ohheyaaheyyyyYYhey";
    string subString = "hey";

    vector<int> ans = subStringFind(largerString, subString);
    for (auto itr : ans)
        cout << itr << " ";
    return 0;
}

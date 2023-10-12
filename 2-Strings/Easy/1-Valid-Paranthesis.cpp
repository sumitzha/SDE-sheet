#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool bracket_pair(char a, char b)
    {
        if ((a == '(' && b == ')') ||
            (a == '[' && b == ']') ||
            (a == '{' && b == '}'))
            return true;
        return false;
    }

    bool isValid(string s)
    {
        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {
            char current = s[i];

            // for opening brackets
            if ((current == '(') || (current == '[') || (current == '{'))
                st.push(current);

            // for non opening brackets
            else
            {
                if (st.empty())
                    return false;

                char top = st.top();
                if (bracket_pair(top, current))
                    st.pop();
                else
                    return false;
            }
        }
        return st.empty();
    }
};
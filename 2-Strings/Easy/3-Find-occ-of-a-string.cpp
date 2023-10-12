#include <bits/stdc++.h>
using namespace std;

int findPosn(string str, string sub){
    return str.find(sub);
}

int main()
{
    string largerString = "ohheyaheyyyyhey";
    string subString = "hey";

    cout << findPosn(largerString, subString);
}
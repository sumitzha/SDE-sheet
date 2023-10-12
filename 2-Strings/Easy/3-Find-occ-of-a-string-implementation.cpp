#include <bits/stdc++.h>
using namespace std;

int findPosn(string str, string sub){
    return str.find(sub);
}

int main()
{
    string largerString = "Ojihappyjihapyy";
    string subString = "happy";

    cout << findPosn(largerString, subString);
}
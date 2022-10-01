#include <iostream>
#include <string.h>

using namespace std;

string removeDuplicate(string s){
    if(s.length() == 0) return "";

    char firstchar = s[0];

    string ans = removeDuplicate(s.substr(1));

    if(firstchar == ans[0]) return ans;

    return (firstchar+ans);
}

int main()
{
    string s = "ttaarun";
    cout<<removeDuplicate(s);
}

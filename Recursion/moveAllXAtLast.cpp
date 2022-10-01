#include <iostream>
#include <string.h>

using namespace std;

string moveAllXToLast(string s){
    if(s.length() == 0) return "";

    char firstchar = s[0];

    string ans = moveAllXToLast(s.substr(1));

    if(firstchar == 'x'){
        return ans+firstchar;   
    }
    return firstchar+ans;
}

int main()
{
    string s = "taxxruxxnx";
    cout<<moveAllXToLast(s);
}

#include <iostream>
#include <string.h>

using namespace std;

void subString(string s,string ans){
    
    if(s.length() == 0){
        cout <<ans <<endl;
        return;
    }

    char firstchar = s[0];

    string ros = s.substr(1);

    subString(ros,ans);
    subString(ros,ans+firstchar);

}

int main()
{
    subString("ABC","");
}

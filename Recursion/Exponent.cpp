#include<iostream>
#include<array>

using namespace std;

int exponent(int n){
    if(n == 0) return 0;

    int answer = exponent(n/2);
    if(n & 1){
        return 2 * answer * answer;
    }else{
        return answer * answer;
    }
}


int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"exponent is is: "<<exponent(n);
};


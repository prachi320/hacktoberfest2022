#include<iostream>
#include<stdio.h>

using namespace std;


void dec(int n){
    if(n == 1){
        cout <<"1"<<endl;
        return;
    }

    cout<<n<<" ";
    dec(n-1);
}

void inc(int n){
    if(n == 1){
        cout <<"1"<<endl;
        return;
    }
    
    inc(n-1);
    cout<<n<<" ";
}


int main(){
    dec(5);
    inc(5);
}



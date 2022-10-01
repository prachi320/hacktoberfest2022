#include<iostream>

using namespace std;


void printSpelling(int n,string str[]){
    if(n <= 0){
        return;
    }
    printSpelling(n/10,str);
    cout<<str[n%10]<<" ";
}



int main(){
    int n;

    cout<<"Enter the number"<<endl;
    
    cin>>n;

    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    cout<<"Answer is"<<endl;
    printSpelling(n,arr);

    return 0;
}





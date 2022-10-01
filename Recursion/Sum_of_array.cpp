#include<iostream>
#include<array>

using namespace std;

int sum(int n,int arr[]){
    if(n <0) return 0;
    return sum(n-1,arr) + arr[n];
}


int main(){
    int n = 3;
    int arr[] = {1,2,3,4,5,6,7};
    cout<<"Sum is: "<<sum(n,arr);
};


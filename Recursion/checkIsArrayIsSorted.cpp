#include<iostream>
#include<stdio.h>

using namespace std;


bool isSorted(int arr[],int n){
    if(n == 1) return true;

    bool restArray = isSorted(arr+1,n-1);
    
    // cout <<arr[0]<<" "<<arr[1]<<endl;

    return (arr[0] < arr[1] && restArray);
}


int main(){
    int arr[] = {1,2,3,4,5};

    if(isSorted(arr,5)){
        cout << "Sorted"<<endl;
    }else{
        cout << "Not Sorted" << endl;
    }
}



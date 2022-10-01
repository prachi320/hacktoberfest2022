#include<iostream>

using namespace std;

void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void sortZeroOne(int arr[],int n){
    int i=0,j=1;
    while (j<n)
    {
        if(arr[j] == 0){
            i++;
            swap(arr,i,j);
        }
        j++;
    }
    
    
}


int main(){
    int arr[] = {0,1,0,1,0,1,1,0,1,0};
    int n = 10;
    sortZeroOne(arr, n);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}



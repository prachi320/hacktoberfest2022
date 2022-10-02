#include<iostream>
using namespace std;
void count_sort(int *arr, int n, int k)
{
    int count[k + 1]  = {0};
    
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    int j = -1;
    for (int i = 0; i <= k; i++)
    {
        count[i] += j;
        j = count[i];
    }

    for (int i = n - 1; i >= 0;)
    {
        if (count[k] == i)
        {
            k--;
        }
        else
        {
            arr[i] = k+1;
            i--;
        }
    }
}
int main()
{
    int size;
    cout<<"\nEnter the size of the array : ";
    cin>>size;
    int arr[size];
    int k;
    cout<<"\nEnter the rangeof the array : ";
    cin>>k;
    cout<<"\nEnter the array elements : \n";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    count_sort(arr, size, k);
    cout<<"\nSorted array is : \n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ,";
    }

    return 0;
}

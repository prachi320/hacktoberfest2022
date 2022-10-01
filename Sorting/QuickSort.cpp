#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int partition(int *a, int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }

        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        
    } while (i < j);

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}

void quickSort(int *arr, int low, int high)
{
    int partisanIndex;
    if (low < high)
    {
        partisanIndex = partition(arr, low, high);
        quickSort(arr, low, partisanIndex - 1);
        quickSort(arr, partisanIndex + 1, high);
    }
}

int main()
{
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    int n = 9;
    printArray(a, n);
    quickSort(a, 0, n - 1);
    printArray(a, n);
    return 0;
}

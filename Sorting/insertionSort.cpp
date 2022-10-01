#include <iostream>

using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertionSort(int *a, int n)
{
    int key, j;

    for (int i = 1; i <n; i++)
    {
        // loop for wach pass
        int key = a[i];
        j = i-1;
        
        while (j >=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main()
{
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = 9;

    printArray(a, n);
    insertionSort(a, n);
    printArray(a, n);
}

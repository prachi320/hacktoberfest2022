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

void bubbleSort(int *a, int n)
{
    int issorted;
    for (int i = 0; i < n; i++)
    {
        issorted = 1;
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                issorted = 0;
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        if (issorted)
        {
            break;
        }
    }
}

int main()
{
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = 9;
    printArray(b, n);
    bubbleSort(b, n);
    printArray(b, n);
}

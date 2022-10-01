#include <iostream>

using namespace std;

void heapify(int arr[], int n, int i)
{
    int maxIndx = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[maxIndx])
    {
        maxIndx = l;
    }

    if (r < n && arr[r] > arr[maxIndx])
    {
        maxIndx = r;
    }
    if (maxIndx != i)
    {
        swap(arr[i], arr[maxIndx]);
        heapify(arr, n, maxIndx);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    heapSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
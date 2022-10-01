#include <iostream>
#include <vector>

using namespace std;

int isSorted(vector<int> arr, int i)
{

    if (i >= arr.size())
    {
        return 1;
    }

    if (arr[i] < arr[i - 1])
    {
        return 0;
    }

    return isSorted(arr, i + 1);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int resp = isSorted(arr, 1);
    if (resp)
    {
        cout << "sorted" << endl;
    }
    else
    {
        cout << "Not sorted" << endl;
    }
}

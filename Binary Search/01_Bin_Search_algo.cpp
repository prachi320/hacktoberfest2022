#include <bits/stdc++.h>
using namespace std;

int bin_search(vector<int> v, int l, int r, int k)
{
    int mid = l + (r - l) / 2; // Never use mid=(l+r)/2 (it can result in integer overflow...)
    while (r >= l)
    {
        if (v.at(mid) == k)
        {
            return mid;
        }
        else if (v.at(mid) < k)
        {
            return bin_search(v, mid + 1, r, k);
        }
        else
        {
            return bin_search(v, l, mid - 1, k);
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);
        }
        int k;
        cin >> k;
        cout << bin_search(v, 0, n - 1, k) << endl;
    }
    return 0;
}
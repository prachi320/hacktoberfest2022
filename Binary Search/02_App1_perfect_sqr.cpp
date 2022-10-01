#include <bits/stdc++.h>
using namespace std;

int perfect(vector<int> v, int l, int r, int k)
{
    int mid = l + (r - l) / 2;
    while (r >= l)
    {
        if (v.at(mid) * v.at(mid) == k)
        {
            return 1;
        }
        else if (v.at(mid) * v.at(mid) < k)
        {
            return perfect(v, mid + 1, r, k);
        }
        else if (v.at(mid) * v.at(mid) > k)
        {
            return perfect(v, l, mid - 1, k);
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
            v.push_back(i);
        }
        cout << perfect(v, 0, n - 1, n) << endl;
    }
    return 0;
}
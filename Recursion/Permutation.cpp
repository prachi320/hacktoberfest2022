#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> ans;

void perMute(vector<int> &a, int idx)
{
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    
    for (int i = 0; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        perMute(a, idx + 1);
        swap(a[i], a[idx]);
    }
    return;
}

int main()
{
    int n; cin >> n;

    vector<int> a(n);

    for (auto &i : a)
        cin >> i;

    perMute(a, 0);

    for (auto v : ans)
    {
        for (auto i : v)
            cout << i << " ";
        cout << "\n";
    }
}

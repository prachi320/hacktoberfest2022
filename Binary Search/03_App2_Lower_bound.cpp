#include<bits/stdc++.h>
using namespace std;

int l_bound(vector<int> v, int l, int r, int k)
{
    int ans=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(v.at(mid)>=k)
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int input;
            cin>>input;
            v.push_back(input);
        }
        int k;
        cin>>k;
        int ans=l_bound(v, 0, n-1, k);
        cout<<ans<<endl;
    }   
    return 0;
}
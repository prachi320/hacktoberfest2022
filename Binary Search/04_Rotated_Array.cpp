#include <bits/stdc++.h>
using namespace std;
//An array is sorted but it is rotated, now you need to find the smallest element of array using binary search....

int f_s(vector<int> v, int l, int r)
{
    int ans=0;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if( v.at(mid)<v.at(0) )
        {
            ans=mid;
            r=mid-1;
        }
        else if( v.at(mid)>v.at(0) )
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
        int ans=f_s(v, 0, n-1);
        cout<<v.at(ans)<<endl;
    }   
    return 0;
}
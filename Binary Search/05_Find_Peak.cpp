#include <bits/stdc++.h>
using namespace std;
//Elements of an array increases first , then decreases, you need to find the peak element of given array using binary search....

int peak(vector<int> v, int l, int r)
{
    int ans=0;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(mid!=0 and v.at(mid)>v.at(mid-1) )
        {
            ans=mid;
            l=mid+1;
        }
        else if(mid!=0 and v.at(mid)<v.at(mid-1) )
        {
            r=mid-1;
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
        int ans=peak(v, 0, n-1);
        cout<<v.at(ans)<<endl;
    }   
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<int> a;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int y;
    cin>>y;
    if (y>a.back())
        cout<<"Lower bound doesn't exist.";
    int l=0,r=n-1,res=-1;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (a[mid]>=y)
        {
            res=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
    cout<<"Lower bound = "<<res<<","<<a[res];
}

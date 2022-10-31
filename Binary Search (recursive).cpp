#include<bits/stdc++.h>
using namespace std;

int bsearch(int l, int r, int y, vector<int> &a)
{
    if (l>r)
        return -1;
    int mid=(l+r)/2;
    if (a[mid]==y)
        return mid;
    else if (a[mid]>y)
        return bsearch(l,mid-1,y,a);
    else
        return bsearch(mid+1,r,y,a);
}

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
    int ans=bsearch(0,n-1,y,a);
    if (ans==-1)
        cout<<"Element found!\n";
    else
        cout<<"Element not found!\n";
}

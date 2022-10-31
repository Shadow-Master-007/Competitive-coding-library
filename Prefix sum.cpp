#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<int> a;
    vector<int> pre(n);
    for (int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
        pre[i]=a[i];
        if (i!=0)
            pre[i]+=pre[i-1];
    }
    cout<<"Input array:\n";
    for (int x: a)
        cout<<x<<", ";
    cout<<"\nPrefix sum:\n";
    for (int x: pre)
        cout<<x<<", ";
}

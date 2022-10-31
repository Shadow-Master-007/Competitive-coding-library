#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int x=a,y=b;
    while (y!=0)
    {
        int r=x%y;
        x=y;
        y=r;
    }
    cout<<"GCD of "<<a<<" and "<<b<<" = "<<x<<'\n';
}

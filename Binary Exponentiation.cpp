#include<bits/stdc++.h>
using namespace std;

int binary_exponentiation(int x, int y, int m)
{
    x=x%m;
    int ans=1;
    while (y!=0)
    {
        if (y&1)
            ans=(ans*x)%m;
        x=(x*x)%m;
        y>>=1;
    }
    return ans;
}

int main()
{
    int a,b;
    cin>>a>>b>>m;
    cout<<binary_exponentiation(a,b,m);
}

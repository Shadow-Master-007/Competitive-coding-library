#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    for (int i=2;i<=sqrt(a);i++)
    {
        if (a%i==0)
            cout<<"Not a prime number!\n";
    }
    cout<<"It's a prime number!\n";
}

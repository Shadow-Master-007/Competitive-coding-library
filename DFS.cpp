#include<bits/stdc++.h>
using namespace std;

void DFS(int s, vector<bool> &vis, vector<vector<int>> &g)
{
    vis[s]=true;
    cout<<s<<", ";
    for (int x: g[s])
    {
        if (vis[x]==false)
            DFS(x,vis,g);
    }
}

int main()
{
    int n,m,x,y;
    cin>>n>>m;
    vector<vector<int>> g(n);
    for (int i=0;i<m;i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    vector<bool> vis(n+1,false);
    cout<<"DFS visit order:\n";
    for (int i=1;i<=n;i++)
    {
        if (vis[i]==false)
            DFS(i,vis,g);
    }
}

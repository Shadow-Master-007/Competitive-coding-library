#include<bits/stdc++.h>
using namespace std;

void BFS(int s, vector<bool> &vis, vector<vector<int>> &g)
{
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int x=q.front();
        vis[x]=true;
        cout<<x<<", ";
        q.pop();
        for (int v: g[x])
        {
            if (vis[v]==false)
                q.push(v);
        }
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
    cout<<"BFS order visit:\n";
    for (int i=1;i<=n;i++)
    {
        if (vis[i]==false)
            BFS(i,vis,g);
    }
}

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

int parent[N],rank[N];

void preprocess(int n)
{
    memset(rank,0,sizeof(rank));
    for (int i=0;i<=n;i++)
        parent[i]=i;
}

int find(int u)
{
    if (parent[u]==u)
        return u;
    return parent[u]=find(parent[u]);
}

void unnion(int u, int v)
{
    u=find(u);
    v=find(v);
    if (u==v)
        return;
    if (rank[u]>rank[v])
        swap(u,v);
    if (rank[u]==rank[v])
    {
        parent[v]=u;
        rank[u]++;
    }
    else
        parent[v]=u;
}

int main()
{
    int n,m,u,v;
    cin>>n>>m;
    preprocess(n);
    for (int i=0;i<m;i++)
    {
        cin>>u>>v;
        unnion(u,v);
    }
    cin>>u>>v;
    if (find(u)==find(v))
        cout<<u<<" and "<<v<<" are in the same group.\n";
    else
        cout<<u<<" and "<<v<<" are not in the same group.\n";
}

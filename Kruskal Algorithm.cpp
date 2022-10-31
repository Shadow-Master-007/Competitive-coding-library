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
    int n,m,u,v,w;
    cin>>n>>m;
    preprocess(n);
    vector<vector<int>> edge;
    for (int i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        edge.push_back({w,u,v});
    }
    sort(edge.begin(),edge.end());
    int total=0;
    for (int i=0;i<m;i++)
    {
        if (find(edge[i][1])!=find(edge[i][2]))
        {
            total+=edge[i][0];
            unnion(edge[i][1],edge[i][2]);
        }
    }
    cout<<"Total weight (using Kruskal Algorithm) = "<<total;
}

#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
using namespace std;

void shortestPath(vector<int> adj[], int s, int v, vector<int>& dist)
{
    queue<int> q;
    vector<bool> visited(v, false);
    q.push(s);
    dist[0]=0;
    visited[s]=true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int neighb : adj[u])
        {
            if (visited[neighb] == false)
            {
                dist[neighb] = dist[u] + 1;
                visited[neighb] = true;
                q.push(neighb);
            }
        }
    }
    for (int i = 0; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
    }
    cout<<endl;
}

void addEdgeUnordered(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int v = 6;
    vector<int> dist(v, INT_MAX);
    vector<int> adj[v];
    addEdgeUnordered(adj, 0, 1);
    addEdgeUnordered(adj, 0, 2);
    addEdgeUnordered(adj, 0, 4);
    addEdgeUnordered(adj, 1, 3);
    addEdgeUnordered(adj, 2, 3);
    addEdgeUnordered(adj, 2, 4);
    addEdgeUnordered(adj, 3, 5);
    addEdgeUnordered(adj, 4, 5);
    shortestPath(adj, 0, 6, dist);
    return 0;
}
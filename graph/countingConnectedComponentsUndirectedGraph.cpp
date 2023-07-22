#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    // Print Graph
    void printGraph(vector<int> adj[], int v)
    {
        for (int i = 0; i < v; i++)
        {
            for (int x : adj[i])
                cout << x << " ";
            cout << "\n";
        }
    }
    // Adding Edge unordered Graph
    void addEdgeUnordered(vector<int> adj[], int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // Adding Edge ordered Graph
    void addEdgeOrdered(vector<int> adj[], int u, int v)
    {
        adj[u].push_back(v);
    }
};

// Breadth First Search of Second Version : No source given and graph may be disconnected
void BFSSecondVersion(vector<int> adj[], int s, int v, bool visited[])
{
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

// BFS Disconnected graph

int BFSDis(vector<int> adj[], int v)
{
    bool visited[v + 1];
    int count=0;
    for (int i = 0; i <=v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false){
            BFSSecondVersion(adj, i, v, visited); // Visiting all disconnected graph
            count++;
        }
    }
    return count;
}

int main()
{
    int v = 4;
    vector<int> adj[v];
    Graph graph;
    graph.addEdgeUnordered(adj, 0, 1);
    graph.addEdgeUnordered(adj, 0, 2);
    graph.addEdgeUnordered(adj, 1, 3);
    graph.addEdgeUnordered(adj, 2, 3);
    graph.addEdgeUnordered(adj, 4, 5);
    graph.addEdgeUnordered(adj, 5, 6);
    graph.addEdgeUnordered(adj, 4, 6);
    cout<<BFSDis(adj, v)<<endl;
    // graph.printGraph(adj,v);
    return 0;
}


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
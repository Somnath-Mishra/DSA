#include<iostream>
#include<vector>
#include<queue>
#include<bits/stdc++.h>
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


//Breadth First Search : First version
//First Version : Given an undirected graph and a source vertex 's' print BFS from the given source
void BFS(vector<int>adj[],int v,int s){
    bool visited[v+1];
    for(int i=0;i<v;i++)
        visited[i]=false;
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<" " ;
        for(auto v:adj[u]){
            if(visited[v]==false){
                visited[v]=true;
                q.push(v);
            }
        }
    }
}
int main(){
    int v=5;
    vector<int>adj[v];
    Graph graph;
    graph.addEdgeUnordered(adj,0,1);
    graph.addEdgeUnordered(adj,0,2);
    graph.addEdgeUnordered(adj,1,2);
    graph.addEdgeUnordered(adj,1,3);
    graph.addEdgeUnordered(adj,3,4);
    graph.addEdgeUnordered(adj,2,4);
    graph.addEdgeUnordered(adj,2,3);
    BFS(adj,5,0);
    return 0;

}
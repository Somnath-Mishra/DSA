#include<iostream>
#include<vector>
#include<queue>
#include<limits.h>
using namespace std;

bool DFSRec(vector<int>adj[],int s,vector<bool>visited,int parent){
    visited[s]=true;
    
        for(int u:adj[s]){
            if(visited[u]==false){
                if(DFSRec(adj,u,visited,s)==true){
                    return true;
                }
                else if(u!=parent){
                    return true;
                }
            }
        }
        return false;
    
}
bool DFS(vector<int>adj[],int v){
    vector<bool>visited(v,false);
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(DFSRec(adj,i,visited,-1)==true)
                return true;
        }
    }
    return false;
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
    cout<<DFS(adj,v)<<endl;
    return 0;
}
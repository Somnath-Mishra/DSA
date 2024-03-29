#include<iostream>
#include<vector>
using namespace std;

//Unordered Graph

void addEdgeUnordered(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int>adj[],int v){
    for(int i=0;i<v;i++){
        for(int x : adj[i])
            cout<<x<<" ";
        cout<<"\n";
    }
}
int main(){
    int v=4;
    vector<int>adj[v];
    addEdgeUnordered(adj,0,1);
    addEdgeUnordered(adj,0,2);
    addEdgeUnordered(adj,1,2);
    addEdgeUnordered(adj,1,3);
    printGraph(adj,v);
    return 0;
}

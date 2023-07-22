#include<iostream>
#include<vector>
using namespace std;

//Ordered Graph

//Adding Edge in ordered map
void addEdgeOrdered(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
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
    addEdgeOrdered(adj,0,1);
    addEdgeOrdered(adj,0,2);
    addEdgeOrdered(adj,1,2);
    addEdgeOrdered(adj,2,1);
    addEdgeOrdered(adj,2,3);
    addEdgeOrdered(adj,3,1);
    printGraph(adj,v);
    return 0;
}
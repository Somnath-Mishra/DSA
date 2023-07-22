#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool DFSRec(vector<int>adj[],int s,vector<bool>visited,vector<bool>recst){
    visited[s]=true;
    recst[s]=true;
    for(int u:adj[s]){
        if(visited[u]==false && DFSRec(adj,u,visited,recst)){
            return true;
        }
        else if(recst[u]==true)
            return true;
    }
    recst[s]=false;
    return false;
}
bool DFS(vector<int>adj[],int v){
    vector<bool>visited(v,false);
    vector<bool>recst(v,false);
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(DFSRec(adj,i,visited,recst)==true){
                return true;
            }
        }
    }
    return false;
}





void addEdgeOrdered(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
}

int main(){
    int v=7;
    vector<int>adj[v];
    addEdgeOrdered(adj,0,1);
    addEdgeOrdered(adj,2,1);
    addEdgeOrdered(adj,2,3);
    addEdgeOrdered(adj,1,3);
    // addEdgeOrdered(adj,4,5);
    // addEdgeOrdered(adj,5,2);
    // addEdgeOrdered(adj,5,3);
    cout<<DFS(adj,v)<<endl;
    return 0;
}
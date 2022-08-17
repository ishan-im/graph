#include<bits/stdc++.h>
using namespace std;

bool checkBipartite(vector<int> adj[], int n){

    

}


int main(){

    cout<<"Enter number of nodes: ";
    int n,m;

    cin>>n;
    cout<<"Enter number of edges: ";
    cin>>m;

    vector<int> adjList[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    if(checkBipartite(adjList,n)){
        cout<<"Bipartite";
    }
    else{
        cout<<"Not bipartite";
    }

    return 0;
}
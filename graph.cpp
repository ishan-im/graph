#include<bits/stdc++.h>
using namespace std;

// graph using adjancency list

// undirected graph

// space complexity n+2m


int main(){


    // n nodes, m edges

    int n, m;
    cin>>n>>m;

    vector<int> adj[n+1];

    for(int i=0; i<m; i++){

        cout<<"Enter adjacency nodes one by one"<<endl;

        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return 0;



}


//directed graph


// space complexity n+m


int main(){

    int n,m;

    cin>>n >>m;

    vector<int> adj[n+1];

    for(int i=0;i<m;i++){

        int u,v;

        cin>>u>>v;

        adj[u].push_back(v);
    }


    return 0;


}


// weighted undirected graph


int main(){


int n,m;
cin>>n>>m;

vector<pair<int,int>>adj[n+1];

for(int i=0; i<m;i++){

int u,v,wt;

cin>>u>>v>>wt;

adj[u].push_back({v,wt});
adj[v].push_back({u,wt});


}

return 0;

}

#include<bits/stdc++.h>

using namespace std;
#include<vector>


class Solution{
    
};



int main(){

    int tc;
    cin>>tc;

    while(tc--){

        int V,E;
        cin>>V>>E;

        vector<int>adj[V];

        for(int i=0; i<E; i++){
            int u,v;
            cin>>u>>v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    Solution obj;
}
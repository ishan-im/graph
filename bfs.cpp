#include<bits/stdc++.h>

#include<queue>

using namespace std;


class Solution {

    public:

    vector<int>bfsOfGraph(int v, vector<int> adj[]){

        vector<int> bfs;
        vector<int> vis(v+1,0);

        for(int i=1; i<v; i++){

            if(!vis[i]){

                queue<int> q;
                q.push(i);
                vis[i]=1;

                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    
                }

            }

        }

    }

};
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
    
public:
   bool vailPath(int n ,vector<vector<int>>& edges,int source, int destination){
     unordered_map<int,vector<int>>graph;

     for (const auto& edge : edges) 
     {
        int u = edge[0];
        int v = edge[1];
        graph[u].push_back(v);
        graph[v].push_back(u);
     }

     unordered_set<int> visited;
     return dfs(source,destination, graph, visited);
     
   }
};

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int, bool> &visited,
         unordered_map<int, set<int>> &adj, vector<int> &component)
{
    component.push_back(node);
    visited[node] = true;

    // others connected node ke liye recursive call
    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            dfs(i, visited, adj, component);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{

    // prepare adjList
    unordered_map<int, set<int>> adj;
    for (int i = 0; i < edges.size(); ++i)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].insert(v);
        adj[v].insert(u);
    }

    vector<vector<int>> ans;
    unordered_map<int, bool> visited;

    for (int i = 0; i < V; ++i)
    {
        if (!visited[i])
        {
            vector<int> component;
            dfs(i, visited, adj, component);
            ans.push_back(component);
        }
    }
    return ans;
}
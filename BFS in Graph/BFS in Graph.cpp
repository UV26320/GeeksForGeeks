#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <queue>

using namespace std;

void prepareAdjList(unordered_map<int, set<int>> &adjList, vector<vector<int>> &adj)
{
    for (const auto &edge : adj)
    {
        int u = edge[0];
        int v = edge[1];

        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

void bfs(unordered_map<int, set<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);

        for (auto neighbor : adjList[frontNode])
        {
            if (!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj)
{
    unordered_map<int, set<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    // Initialize visited nodes as false
    for (int i = 0; i < n; ++i)
    {
        visited[i] = false;
    }

    prepareAdjList(adjList, adj);

    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
        {
            bfs(adjList, visited, ans, i);
        }
    }
    return ans;
}
#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <set>

using namespace std;

void prepareAdjList(unordered_map<int, set<int>> &adjList, vector<pair<int, int>> &adj)
{
    for (const auto &edge : adj)
    {
        int u = edge.first;
        int v = edge.second;

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

        for (int i : adjList[frontNode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

vector<vector<int>> bfsTraversal(int n, vector<pair<int, int>> &adj)
{
    unordered_map<int, set<int>> adjList;
    vector<vector<int>> result;
    unordered_map<int, bool> visited;

    prepareAdjList(adjList, adj);

    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
        {
            vector<int> ans;
            bfs(adjList, visited, ans, i);
            result.push_back(ans);
        }
    }
    return result;
}

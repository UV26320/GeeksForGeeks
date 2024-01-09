#include <iostream>
#include <list>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

bool isCyclicBFS(int src, unordered_map<int, bool> &visited,
                 unordered_map<int, list<int>> &adj)
{
    unordered_map<int, int> parents;
    parents[src] = -1;
    visited[src] = true;
    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for (auto neighbour : adj[front])
        {
            if (!visited[neighbour])
            {
                q.push(neighbour);
                visited[neighbour] = true;
                parents[neighbour] = front;
            }
            else if (neighbour != parents[front])
            {
                return true; // Cycle detected
            }
        }
    }
    return false; // No cycle found
}

bool isCyclicDFS(int node, int parents, unordered_map<int, bool> &visited,
                 unordered_map<int, list<int>> &adj)
{
    visited[node] = true;

    for (auto neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            bool cycleDetected = isCyclicDFS(neighbour, node, visited, adj);
            if (cycleDetected)
                return true;
        }
        else if (neighbour != parents)
        {
            // cycle prarent
            return true;
        }
    }
    return false;
}

string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    // Create adjacency list
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < m; ++i)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // to handle disconnected components
    unordered_map<int, bool> visited;
    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
        {
            // bool ans = isCyclicBFS(i, visited, adj);
            bool ans = isCyclicDFS(i, -1, visited, adj);

            if (ans == true)
                return "Yes";
        }
    }
    return "No";
}
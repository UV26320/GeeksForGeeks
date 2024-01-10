#include <bits/stdc++.h>
using namespace std;

void TopoSort(int node, vector<bool> &visited, stack<int> &s, unordered_map<int, list<int>> &adj)
{
    visited[node] = true;
    for (auto neighbour : adj[node])
    { // Added a missing closing parenthesis here
        if (!visited[neighbour])
            TopoSort(neighbour, visited, s, adj);
    }
    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{

    // Approach 1 = using DFS
    // unordered_map<int, list<int>> adj;
    // for (int i = 0; i < e; ++i) {
    //     int u = edges[i][0];
    //     int v = edges[i][1];
    //     adj[u].push_back(v);
    // }

    // vector<bool> visited(v);
    // stack<int> s;

    // for (int i = 0; i < v; ++i) {
    //     if (!visited[i])
    //         TopoSort(i, visited, s, adj);
    // }

    // vector<int> ans;

    // while (!s.empty()) {
    //     ans.push_back(s.top());
    //     s.pop();
    // }
    // return ans;

    // ================================================================================

    // Approach 2 = Using BFS (known as khan's Algo)

    unordered_map<int, list<int>> adj;
    for (int i = 0; i < e; ++i)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }

    // find all indegrees
    vector<int> indegrees(v);

    for (auto i : adj)
    {
        for (auto j : i.second)
        {
            indegrees[j]++;
        }
    }

    // of which node indegree is zero(0) we can push them into queue
    queue<int> q;
    for (int i = 0; i < v; ++i)
    {
        if (indegrees[i] == 0)
            q.push(i);
    }

    // Do DFS for all other nodes
    vector<int> ans;

    while (!q.empty())
    {

        int front = q.front();
        q.pop();

        // store ans
        ans.push_back(front);

        // neighbour indegreea update

        for (auto neighbour : adj[front])
        {

            indegrees[neighbour]--;
            if (indegrees[neighbour] == 0)
                q.push(neighbour);
        }
    }

    return ans;
}

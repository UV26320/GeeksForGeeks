#include <bits/stdc++.h>
using namespace std;

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    // Write your code here.
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); ++i)
    {
        int u = edges[i].first - 1;
        int v = edges[i].second - 1;
        adj[u].push_back(v);
    }

    // find all indegrees
    vector<int> indegrees(n);

    for (auto i : adj)
    {
        for (auto j : i.second)
        {
            indegrees[j]++;
        }
    }

    // of which node indegree is zero(0) we can push them into queue
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (indegrees[i] == 0)
            q.push(i);
    }

    // Do DFS for all other nodes
    int count = 0;

    while (!q.empty())
    {

        int front = q.front();
        q.pop();

        // increase count
        count++;

        // neighbour indegreea update

        for (auto neighbour : adj[front])
        {

            indegrees[neighbour]--;
            if (indegrees[neighbour] == 0)
                q.push(neighbour);
        }
    }

    if (count == n)
        return false;
    else
        return true;
}
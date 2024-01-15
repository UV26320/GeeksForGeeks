#include <bits/stdc++.h>
using namespace std;

vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges)
{
    // Write your code here.
    vector<int> dist(n + 1, 1e9);
    dist[src] = 0;

    // n-1 times
    for (int i = 1; i <= n; i++)
    {
        // traverse all edges
        for (int j = 0; j < m; j++)
        {
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];

            if (dist[u] != 1e9 && ((dist[u] + wt) < dist[v]))
            {
                dist[v] = dist[u] + wt;
            }
        }
    }

    // checking for negative cycles
    bool flag = 0;
    for (int i = 1; i <= n; i++)
    {
        // traverse all edges
        for (int j = 0; j < m; j++)
        {
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];

            if (dist[u] != 1e9 && ((dist[u] + wt) < dist[v]))
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        return dist;

    return vector<int>(); // or any other way to indicate the presence of negative cycle
}
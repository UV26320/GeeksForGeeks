#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {

        int n = grid.size();
        int m = grid[0].size();

        // base case
        if (n == 0)
            return 0;

        int peri = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {

                if (grid[i][j] == 1)
                {

                    peri += 4;
                    if (i > 0 and grid[i - 1][j] == 1)
                        peri -= 2;
                    if (j > 0 and grid[i][j - 1] == 1)
                        peri -= 2;
                }
            }
        }

        return peri;
    }
};
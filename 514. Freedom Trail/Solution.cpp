#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int solve(string &ring, string &key, int ptr, int index)
    {

        int n = ring.size();
        int m = key.size();

        // base case
        if (index >= m)
            return 0;

        // recursive call (choices...)
        int steps = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (ring[i] == key[index])
            {
                steps = min(steps, min(abs(i - ptr), n - abs(i - ptr)));
            }
        }
        return steps;
    }

public:
    int findRotateSteps(string ring, string key)
    {

        int ptr = 0;
        int index = 0;

        int n = ring.size();
        int m = key.size();

        solve(ring, key, ptr, index);
    }
};
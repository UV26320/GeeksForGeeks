#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        sort(people.begin(), people.end());
        int n = people.size();
        int left = 0, right = n - 1;
        int NoBots = 0;

        while (left <= right)
        {
            if (people[left] + people[right] <= limit)
            {
                NoBots++;
                left++;
                right--;
            }
            else
            {
                NoBots++;
                right--;
            }
        }

        return NoBots;
    }
};
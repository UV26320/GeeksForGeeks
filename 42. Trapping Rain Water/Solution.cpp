#include <algorithm>
#include <vector>

using namespace std;

class Solution
{

public:
    int trap(vector<int> &height)
    {

        int n = height.size();

        // base case
        if (n == 0)
            return 0;

        vector<int> left(n);
        vector<int> right(n);

        // fill up left array
        left[0] = height[0];
        for (int i = 1; i < n; ++i)
        {
            left[i] = max(left[i - 1], height[i]);
        }

        // fill up left array
        right[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; --i)
        {
            // here we can start i = n - 2 bcz of in second step we can see
            // right side any taller height building present or not soo we can
            // do i = (n - 2) + 1 that is equal to n-1 and it is valid
            // statement. if we can start i = n-1 then we can never reach
            // farther step. sooo that's way here we can start --> i= n - 2
            right[i] = max(right[i + 1], height[i]);
        }

        // calculate total trapped water
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            ans += (min(left[i], right[i]) - height[i]);
        }

        return ans;
    }
};

# Count number of hops

# Easy | Accuracy: 43.93%

<p>A frog jumps either 1, 2, or 3 steps to go to the top. In how many ways can it reach the top of Nth step. As the answer will be large find the answer modulo 1000000007.</p>

# Example 1:

```bash
Input:
N = 1
Output: 1
```

# Example 2:

```bash
Input:
N = 4
Output: 7
Explanation:Below are the 7 ways to reach
4
1 step + 1 step + 1 step + 1 step
1 step + 2 step + 1 step
2 step + 1 step + 1 step
1 step + 1 step + 2 step
2 step + 2 step
3 step + 1 step
1 step + 3 step
```

<hr>

<span>Your Task:</span>

<p>Your task is to complete the function countWays() which takes 1 argument(N) and returns the answer%(10^9 + 7).</p>

```bash
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 105
```

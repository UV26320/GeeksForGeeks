# Minimum Operations

## Easy  |  Accuracy: 60.02%

<p>Given a number N. Find the minimum number of operations required to reach N starting from 0. You have 2 operations available:<p>

<p>Double the number</p>
<p>Add one to the number</p>

# Example 1:
```bash
Input:
N = 8
Output: 4
Explanation: 
0 + 1 = 1 --> 1 + 1 = 2 --> 2 * 2 = 4 --> 4 * 2 = 8.
```

# Example 2:

```bash
Input: 
N = 7
Output: 5
Explanation: 
0 + 1 = 1 --> 1 + 1 = 2 --> 1 + 2 = 3 --> 3 * 2 = 6 --> 6 + 1 = 7.
```

<hr>

<span>Your Task:</span>
<p>You don't need to read input or print anything. Your task is to complete the function minOperation() which accepts an integer N and return number of minimum operations required to reach N from 0.</p>

```bash
Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 106
```
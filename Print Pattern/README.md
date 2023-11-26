# Print Pattern

## Easy   |   Accuracy: 56.39%

<p>Print a sequence of numbers starting with N, without using loop, where replace N with N - 5, until N > 0. After that replace N with N + 5 until N regains its initial value.</p>

# Example 1:

```bash
Input: 
N = 16
Output: 
16 11 6 1 -4 1 6 11 16
Explaination: 
The value decreases until it is greater than 0. After that it increases and stops when it becomes 16 again.
```

# Example 2:

```bash
Input: 
N = 10
Output: 
10 5 0 5 10
Explaination: It follows the same logic as per the above example.
```

<hr>

<span>Your Task:</span>
<p>You do not need to read input or print anything. Your task is to complete the function pattern() which takes N as input parameters and returns a list containing the pattern.</p>

```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
-105 ≤ N ≤ 105
```
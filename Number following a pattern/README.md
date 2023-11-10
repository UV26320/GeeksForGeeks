# Number following a pattern

## Medium   |   Accuracy: 55.44%

<p>Given a pattern containing only I's and D's. I for increasing and D for decreasing. Devise an algorithm to print the minimum number following that pattern. Digits from 1-9 and digits can't repeat.</p>


# Example 1:

```bash
Input:
D
Output:
21
Explanation:
D is meant for decreasing, so we choose the minimum number among all possible numbers like 21,31,54,87,etc.
```

# Example 2:

```bash
Input:
IIDDD
Output:
126543
Explanation:
Above example is self- explanatory,
1 < 2 < 6 > 5 > 4 > 3
  I - I - D - D - D
```

<hr>

<span>Your Task:</span>
<p>You don't need to read input or print anything. Your task is to complete the function printMinNumberForPattern() which takes the string S and returns a string containing the minimum number following the valid number.</p>

```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ Length of String ≤ 8
```
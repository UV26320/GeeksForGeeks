# Shortest Common Supersequence

## Medium  |  Accuracy: 55.62%

<p>Given two strings X and Y of lengths m and n respectively, find the length of the smallest string which has both, X and Y as its sub-sequences.</p>
<p>Note: X and Y can have both uppercase and lowercase letters.</p>

# Example 1

```bash
Input:
X = abcd, Y = xycd
Output: 6
Explanation: Shortest Common Supersequence
would be abxycd which is of length 6 and
has both the strings as its subsequences.
```

# Example 2

```bash
Input:
X = efgh, Y = jghi
Output: 6
Explanation: Shortest Common Supersequence
would be ejfghi which is of length 6 and
has both the strings as its subsequences.
```

<hr>

<span>Your Task:</span>
<p>You don't have to take any input or print anything. Your task is to complete shortestCommonSupersequence() function that takes X, Y, m, and n as arguments and returns the length of the required string.</p>

```bash
Expected Time Complexity: O(Length(X) * Length(Y)).
Expected Auxiliary Space: O(Length(X) * Length(Y)).

Constraints:
1<= |X|, |Y| <= 100
```
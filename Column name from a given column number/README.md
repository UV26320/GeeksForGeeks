# Column name from a given column number

## Medium  |  Accuracy: 32.41%

<p>Given a positive integer, return its corresponding column title as appear in an Excel sheet.
Excel columns has a pattern like A, B, C, … ,Z, AA, AB, AC,…. ,AZ, BA, BB, … ZZ, AAA, AAB ….. etc. In other words, column 1 is named as “A”, column 2 as “B”, column 27 as “AA” and so on.</p>


# Example 1:

```bash
Input:
N = 28
Output: AB
Explanation: 1 to 26 are A to Z.
Then, 27 is AA and 28 = AB.
```

# Example 2:

```bash
Input: 
N = 13
Output: M
Explanation: M is the 13th character of
alphabet.
```

<hr>

<span>Your Task:</span>
<p>You don't need to read input or print anything. Your task is to complete the function colName() which takes the column number N as input and returns the column name represented as a string.<p>

```bash
Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 1018
```


 
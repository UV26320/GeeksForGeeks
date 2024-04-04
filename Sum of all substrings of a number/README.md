```
# Sum of All Substrings of a Number

Given an integer `s` represented as a string, the task is to get the sum of all possible substrings of this string. As the answer will be large, return the answer modulo 10^9+7.

### Example 1:

**Input:**
```
s = "1234"
```
**Output:** 
```
1670
```
**Explanation:** 
Sum = 1 + 2 + 3 + 4 + 12 + 23 + 34 + 123 + 234 + 1234 = 1670

### Example 2:

**Input:**
```
s = "421"
```
**Output:** 
```
491
```
**Explanation:** 
Sum = 4 + 2 + 1 + 42 + 21 + 421 = 491

### Constraints:
- 1 <= |s| <= 10^5
```

The function `sumSubstrings(s)` takes an input string `s` and returns the sum of all substrings modulo 10^9+7. The time complexity of this function is O(|s|), and the auxiliary space complexity is also O(|s|).
```
# Problem: 1544. Make The String Great

## Problem Description

Given a string `s` of lower and upper case English letters, create a function to make the string "good". A good string is a string which doesn't have two adjacent characters `s[i]` and `s[i + 1]` where:

- 0 <= i <= s.length - 2
- `s[i]` is a lower-case letter and `s[i + 1]` is the same letter but in upper-case or vice-versa.

To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.

Return the string after making it good. The answer is guaranteed to be unique under the given constraints.

### Example:

Input: s = "leEeetcode"
Output: "leetcode"
Explanation: In the first step, either you choose i = 1 or i = 2, both will result "leEeetcode" to be reduced to "leetcode".

Constraints:

1 <= s.length <= 100
s contains only lower and upper case English letters.

## Approach

1. Iterate through the string.
2. If the current character and the next character are the same letters but with different cases, remove them.
3. Repeat step 2 until no adjacent characters violate the condition.
4. Return the resulting string.

## Complexity Analysis

Let n be the length of the input string s.

- Time complexity: O(n) as we iterate through the string once.
- Space complexity: O(n) as we might create a new string of length n.

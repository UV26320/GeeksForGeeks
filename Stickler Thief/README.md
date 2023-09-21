# Stickler Thief

# Medium  |  Accuracy: 37.98%

<p>Stickler the thief wants to loot money from a society having n houses in a single line. He is a weird person and follows a certain rule when looting the houses. According to the rule, he will never loot two consecutive houses. At the same time, he wants to maximize the amount he loots. The thief knows which house has what amount of money but is unable to come up with an optimal looting strategy. He asks for your help to find the maximum money he can get if he strictly follows the rule. ith house has a[i] amount of money present in it.</p>


# Example 1:

```bash
Input:
n = 5
a[] = {6,5,5,7,4}
Output: 
15
Explanation: 
Maximum amount he can get by looting 1st, 3rd and 5th house. Which is 6+5+4=15.
```

# Example 2:

```bash
Input:
n = 3
a[] = {1,5,3}
Output: 
5
Explanation: 
Loot only 2nd house and get maximum amount of 5.
```

<hr>

<span>Your Task:</span>
<p>Complete the functionFindMaxSum() which takes an array arr[] and n as input which returns the maximum money he can get following the rules.</p>


```bash
Expected Time Complexity:O(N).
Expected Space Complexity:O(N).

Constraints:
1 ≤ n ≤ 105
1 ≤ a[i] ≤ 104
```

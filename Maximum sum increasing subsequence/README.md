# Maximum sum increasing subsequence

## Medium   |  Accuracy: 40.02%


<p>Given an array of n positive integers. Find the sum of the maximum sum subsequence of the given array such that the integers in the subsequence are sorted in strictly increasing order i.e. a strictly increasing subsequence.</p>


# Example 1:

```bash
Input: 
N = 5, arr[] = {1, 101, 2, 3, 100} 
Output: 
106
Explanation:
The maximum sum of a increasing sequence is obtained from {1, 2, 3, 100},
```

# Example 2:

```bash
Input: 
N = 4, arr[] = {4, 1, 2, 3}
Output: 
6
Explanation:
The maximum sum of a increasing sequence is obtained from {1, 2, 3}.
```

<hr>

<span>Your Task:</span>  
<p>You don't need to read input or print anything. Complete the function maxSumIS() which takes N and array arr as input parameters and returns the maximum value.</p>


```bash
Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 103
1 ≤ arr[i] ≤ 105
```
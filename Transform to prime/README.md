# Transform to prime

## Medium  |   Accuracy: 42.44%

<p>Given an array of n integers. Find the minimum non-negative number to be inserted in array, so that sum of all elements of array becomes prime.</p>

# Example 1:
```bash
Input:
N=5
arr = {2, 4, 6, 8, 12}
Output:  
5
Explanation: 
The sum of the array is 32 ,we can add 5 to this to make it 37 which is a prime number.
```

# Example 2:
```bash
Input:
N=3
arr = {1, 5, 7}
Output:  
0 
Explanation: 
The sum of the array is 13 which is already prime. 
```

<hr>

<span>Your Task:</span>
<p>You don't need to read input or print anything. Your task is to complete the function minNumber() that takes array arr and integer N as input parameters and returns the minimum positive number to be inserted in the array so as to make it's sum a prime number.</p>

```bash
Expected Time Complexity: O(N log(log N))
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 105
1 ≤ sum of all elements ≤ 106
```


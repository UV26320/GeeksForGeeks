# Majority Element

## Medium Accuracy: 27.82%

<p>Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.</p>
 

## Example 1:

```bash
Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
Explanation:
Since, each element in 
{1,2,3} appears only once so there 
is no majority element.
```

## Example 2:

```bash
Input:
N = 5 
A[] = {3,1,3,3,2} 
Output:
3
Explanation:
Since, 3 is present more
than N/2 times, so it is 
the majority element.
```

<hr>

<span>Your Task:</span>
<p>The task is to complete the function majorityElement() which returns the majority element in the array. If no majority exists, return -1.</p>
 
<hr>

```bash
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
 

Constraints:
1 ≤ N ≤ 107
0 ≤ Ai ≤ 106
```
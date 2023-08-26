# Kth smallest element

## Medium  Accuracy: 35.17%

<hr>
<p>Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.</p>

<p>Note :-  l and r denotes the starting and ending index of the array.</p>

## Example 1:

```bash
Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
```
## Example 2:

```bash
Input:
N = 5
arr[] = 7 10 4 20 15
K = 4
Output : 15
Explanation :
4th smallest element in the given 
array is 15.
```
<hr>

<span>Your Task:</span>
<p>You don't have to read input or print anything. Your task is to complete the function kthSmallest() which takes the array arr[], integers l and r denoting the starting and ending index of the array and an integer K as input and returns the Kth smallest element.</p>

<hr>

```bash
<span>Expected Time Complexity: O(n)</span>
<span>Expected Auxiliary Space: O(log(n))</span>
<span>Constraints:</span>
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N
```

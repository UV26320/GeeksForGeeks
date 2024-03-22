## Diagonal Sum in Binary Tree

Consider Red lines of slope -1 passing between nodes (in the following diagram). The diagonal sum in a binary tree is the sum of all node datas lying between these lines. Given a Binary Tree of size n, print all diagonal sums.

For the following input tree, the output should be 9, 19, 42.
- 9 is the sum of 1, 3, and 5.
- 19 is the sum of 2, 6, 4, and 7.
- 42 is the sum of 9, 10, 11, and 12.

**Example 1:**
Input:
 4
/ \
1  3
   / 
   3
Output:
7 4






**Your Task:**
You do need to take input. Just complete the function `diagonalSum()` that takes the root node of the tree as a parameter and returns an array containing the diagonal sums for every diagonal present in the tree with slope -1.

**Expected Time Complexity:** O(nlogn).
**Expected Auxiliary Space:** O(n).

**Constraints:**
- 1 <= n <= 10^5
- 0 <= data of each node <= 10^4

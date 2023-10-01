# Boundary traversal of matrix

## Easy  |  Accuracy: 35.32%

<p>You are given a matrix of dimensions n x m. The task is to perform boundary traversal on the matrix in a clockwise manner.</p>


# Example 1:

```bash
Input:
n = 4, m = 4
matrix[][] = {{1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12},
         {13, 14, 15,16}}
Output: 1 2 3 4 8 12 16 15 14 13 9 5
Explanation:
The matrix is:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
The boundary traversal is:
1 2 3 4 8 12 16 15 14 13 9 5
```


# Example 2:

```bash
Input:
n = 3, m = 4
matrix[][] = {{12, 11, 10, 9},
         {8, 7, 6, 5},
         {4, 3, 2, 1}}
Output: 12 11 10 9 5 1 2 3 4 8
```

<hr>

<span>Your Task:</span>
<p>Complete the function boundaryTraversal() that takes matrix, n and m as input parameters and returns the list of integers that form the boundary traversal of the matrix in a clockwise manner.</p>

```bash
Expected Time Complexity: O(N + M)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n, m<= 1000
0 <= matrixi <= 1000
```
# Inorder Traversal and BST

## Easy  |  Accuracy: 44.45%

<p>Given an array arr of size N, determine whether this array represents an inorder traversal of a BST. 
Note: All keys in BST must be unique.</p>


# Example 1:

```bash
Input:
N = 3
arr = {2, 4, 5}
Output: 1
Explaination: 
Given array is inorder traversal for the following tree:
    4
   / \
  2   5
```

# Example 2:

```bash
Input:
N = 3
arr = {2, 4, 1}
Output: 0
Explaination: 
Given array can not represent any BST.
```

<hr>

<span>Your Task:</span>
<p>You don't need to read input or print anything. Your task is to complete the function isRepresentingBST() which takes the array arr[] and its size N as input parameters and returns 1 if array represents Inorder traversal of a BST, else returns 0.</p>

```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
1 ≤ arr[i] ≤ 105

```

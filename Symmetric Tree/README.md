# Symmetric Tree

## Easy  |  Accuracy: 44.96%

<p>Given a Binary Tree. Check whether it is Symmetric or not, i.e. whether the binary tree is a Mirror image of itself or not.</p>

# Example 1:

```bash
Input:
         5
       /   \
      1     1
     /       \
    2         2
Output: 
True
Explanation: 
Tree is mirror image of itself i.e. tree is symmetric
```

# Example 2:

```bash
Input:
         5
       /   \
      10     10
     /  \     \
    20  20     30
Output: 
False
```

<hr>

<span>Your Task:</span>
<p>You don't need to read input or print anything. Your task is to complete the function isSymmetric() which takes the root of the Binary Tree as its input and returns True if the given Binary Tree is the same as the Mirror image of itself. Else, it returns False.</p>

```bash
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
0<=N<=105
```
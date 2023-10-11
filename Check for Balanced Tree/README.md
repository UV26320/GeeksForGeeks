# Check for Balanced Tree

## Easy  |  Accuracy: 43.15%

<p>Given a binary tree, find if it is height balanced or not.</p> 
<p>A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree.</p>

```bash
A height balanced tree
        1
     /     \
   10      39
  /
5
```
```bash
An unbalanced tree
        1
     /    
   10   
  /
5
```

# Example 1:

```bash
Input:
      1
    /
   2
    \
     3 
Output: 0
Explanation: The max difference in height
of left subtree and right subtree is 2,
which is greater than 1. Hence unbalanced
```

# Example 2:

```bash
Input:
       10
     /   \
    20   30 
  /   \
 40   60
Output: 1
Explanation: The max difference in height
of left subtree and right subtree is 1.
Hence balanced. 
```

<hr>

<span>Your Task:</span>
<p>You don't need to take input. Just complete the function isBalanced() that takes root node as parameter and returns true, if the tree is balanced else returns false.</p>


```bash
Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 109

Expected time complexity: O(N)
Expected auxiliary space: O(h) , where h = height of tree
```


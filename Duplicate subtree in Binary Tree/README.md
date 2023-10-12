# Duplicate subtree in Binary Tree

## Medium   |   Accuracy: 34.23%

<span>Given a binary tree, find out whether it contains a duplicate sub-tree of size two or more, or not.</span>
<span>Note: Two same leaf nodes are not considered as subtree as size of a leaf node is one.</span>


# Example 1 :

```bash
Input : 
               1
             /   \ 
           2       3
         /   \       \    
        4     5       2     
                     /  \    
                    4    5
Output : 1
Explanation : 
    2     
  /   \    
 4     5
is the duplicate sub-tree.
```

# Example 2 :

```bash
Input : 
               1
             /   \ 
           2       3
Output: 0
Explanation: There is no duplicate sub-tree 
in the given binary tree.
```

<hr>

<span>Your Task:</span>
<p>You don't need to read input or print anything. Your task is to complete the function dupSub() which takes root of the tree as the only argument and returns 1 if the binary tree contains a duplicate sub-tree of size two or more, else 0.</p>


```bash
Expected Time Complexity: O(N)
Expected Space Complexity: O(N)

Constraints:
0 ≤ Data of nodes ≤ 9
1 ≤ Number of nodes ≤ 105 

```

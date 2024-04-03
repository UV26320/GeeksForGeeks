```markdown
# Kth Common Ancestor in BST

## Problem Statement
Given a Binary Search Tree (BST) with n (n >= 2) nodes, find the kth common ancestor of nodes x and y in the given tree. Return -1 if the kth ancestor does not exist.

Nodes x and y will always be present in the input of a BST, and x != y.

### Example 1:

**Input:** 
Input tree:

```
     50
    /  \
  30    70
 /  \  /  \
20  40 60  80
```

k = 2, x = 40, y = 60

**Output:**
30

**Explanation:**
Their 2nd common ancestor is 30.

### Example 2:
**Input:** 
Input tree:

```
     50
    /  \
  30    70
 /  \  /  \
20  40 60  80
```

k = 2, x = 40, y = 60

**Output:**
-1

## Complexity Analysis
- **Time Complexity:** 
    - Finding LCA takes O(height of the tree) time.
    - Finding the kth ancestor takes O(k) time.
    - Overall time complexity is O(height of the tree + k), which is equivalent to O(height of the tree) as k is generally small compared to the height of the tree.
- **Space Complexity:**
    - The space complexity is O(height of the tree) for the recursive calls on the stack.

```
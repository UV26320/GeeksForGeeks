# Pairs Violating the BST Property

Given a binary tree with \( n \) nodes, the task is to find the number of pairs violating the Binary Search Tree (BST) property.

## BST Properties:
1. Every node is greater than its left child and less than its right child.
2. Every node is greater than the maximum value in its left subtree and less than the minimum value in its right subtree.
3. The maximum in the left subtree must be less than the minimum in the right subtree.

## Examples:

### Example 1:
**Input:**
- \( n = 5 \)
- Input tree:
        10
       /  \
     50    40
    / \   /
  20  30 50

**Output:**
    5
**Explanation:**
Pairs violating BST property are:-
- (10,50): 10 should be greater than its left child value.
- (40,30): 40 should be less than its right child value.
- (50,20), (50,30), and (50,40): maximum of left subtree of 10 is 50 greater than 20, 30, and 40 of its right subtree.

### Example 2:
**Input:**
- \( n = 6 \)
- Input tree:
        10
       /  \
     50    40
    / \   / \
  20  30 50 60

**Output:**
    8
**Explanation:**
There are a total of 8 pairs that violate the BST properties.

## Constraints:
- \( 1 \leq n \leq 2 \times 10^4 \)
- \( -10^9 \leq \text{{node->data}} \leq 10^9 \)

## Approach:
1. Traverse the binary tree in an inorder manner.
2. While traversing, keep track of the nodes and their values.
3. For each node, check if its value violates the BST property with respect to all nodes traversed before it.
4. Return the count of pairs violating the BST property.

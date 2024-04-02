# Minimum Absolute Difference In BST

## Problem Description
Given a binary search tree having n (n>1) nodes, the task is to find the minimum absolute difference between any two nodes.

## Example
**Input:**  
Input tree

**Output:**  
10  
**Explanation:**  
There are no two nodes whose absolute difference is smaller than 10.

## Your Task
You don't have to take any input. Just complete the function `absolute_diff()`, that takes root as input and return minimum absolute difference between any two nodes.

## Constraints
- 2 <= n <= 105
- 1 <= Node->data <= 109

## Solution Approach
To find the minimum absolute difference between any two nodes in a BST, we can perform an in-order traversal of the BST. 
While doing the traversal, we keep track of the previously visited node and calculate the absolute difference between the current node and the previous node. 
We update the minimum absolute difference found so far as we traverse the tree.

# Maximum sum of Non-adjacent nodes

## Medium   |  Accuracy: 55.35%

<P>Given a binary tree with a value associated with each node, we need to choose a subset of these nodes such that sum of chosen nodes is maximum under a constraint that no two chosen node in subset should be directly connected that is, if we have taken a node in our sum then we can’t take its any children or parents in consideration and vice versa.</P>
                                            

# Example 1:
```bash
Input:
     11
    /  \
   1    2
Output: 11
Explanation: The maximum sum is sum of
node 11.
```

# Example 2:
```bash
Input:
        1
      /   \
     2     3
    /     /  \
   4     5    6
Output: 16
Explanation: The maximum sum is sum of
nodes 1 4 5 6 , i.e 16. These nodes are
non adjacent.
```

<hr>

<span>Your Task:</span>
<p>You don't need to read input or print anything. You just have to complete function getMaxSum() which accepts root node of the tree as parameter and returns the maximum sum as described.</p>

```bash
Expected Time Complexity: O(Number of nodes in the tree).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 ≤ Number of nodes in the tree ≤ 10000
1 ≤ Value of each node ≤ 100000
```

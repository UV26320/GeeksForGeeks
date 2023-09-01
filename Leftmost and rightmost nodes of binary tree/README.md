# Leftmost and rightmost nodes of binary tree
## Medium  Accuracy: 52.58%


<p>Given a Binary Tree of size N, Print the corner nodes ie- the node at the leftmost and rightmost of each level.</p>


# Example 1:

```bash
Input :
         1
       /  \
     2      3
    / \    / \
   4   5  6   7    
Output: 1 2 3 4 7
Explanation:
Corners at level 0: 1
Corners at level 1: 2 3
Corners at level 2: 4 7
```


# Example 2:

```bash
Input:

        10
      /    \
     20     30
    / \  
   40  60
Output: 10 20 30 40 60
```

<hr>

<span>Your Task:</span>  
<p>You dont need to read input. Complete the function printCorner() which takes root node as input parameter and prints the corner nodes separated by spaces. The left corner should be printed before the right for each level starting from level 0.</p>
<p>Note: Don't print a new line after printing all the corner nodes.</p>


```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(number of nodes in a level)

Constraints:
1 ≤ N ≤ 10^5
```
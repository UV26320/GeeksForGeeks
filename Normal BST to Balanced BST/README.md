# Normal BST to Balanced BST

## Easy  |   Accuracy: 66.08%

<p>Given a Binary Search Tree, modify the given BST such that it is balanced and has minimum possible height. Return the balanced BST.</p>



# Example1:

```bash
Input:
       30
      /
     20
    /
   10
Output:
     20
   /   \
 10     30
```


# Example2:

```bash
Input:
         4
        /
       3
      /
     2
    /
   1
Output:
      3            3           2
    /  \         /  \        /  \
   1    4   OR  2    4  OR  1    3   
    \          /                  \ 
     2        1                    4
```

<hr>

<span>Your Task:</span>
<p>The task is to complete the function buildBalancedTree() which takes root as the input argument and returns the root of tree after converting the given BST into a balanced BST with minimum possible height. The driver code will print the height of the updated tree in output itself.</p>


```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
Here N denotes total number of nodes in given BST.

Constraints:
1 <= N <= 105
1 <= Node data <= 109
```
 


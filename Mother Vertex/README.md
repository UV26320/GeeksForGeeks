# Mother Vertex

## Easy | Accuracy: 47.64%

<p>Given a Directed Graph, find a Mother Vertex in the Graph (if present).</p> 
<p>A Mother Vertex is a vertex through which we can reach all the other vertices of the Graph.</p>


# Example 1:

```bash
Input: 

   1------0
    \     / \
     \   /   \
       2      3
            /
           /
          4

Output: 0
Explanation: According to the given edges, all 
nodes can be reaced from nodes from 0, 1 and 2. 
But, since 0 is minimum among 0,1 and 2, so 0 
is the output.
```


# Example 2:

```bash
Input: 
 
  1----0
   \
    \
     2 

Output: -1
Explanation: According to the given edges, 
no vertices are there from where we can 
reach all vertices. So, output is -1.
```

<hr>

<span>Your Task:</span>
<p>You don't need to read or print anything. Your task is to complete the function findMotherVertex() which takes V denoting the number of vertices and adjacency list as imput parameter and returns the verticex from through which we can traverse all other vertices of the graph. If there is more than one possible nodes then returns the node with minimum value.If not possible returns -1.</p>


```bash
Expected Time Complexity: O(V + E)
Expected Space Compelxity: O(V)

Constraints:
1 ≤ V ≤ 500
```

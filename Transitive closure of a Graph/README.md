# Transitive closure of a Graph

## Medium  |  Accuracy: 29.1%

<p>Given a directed graph, determine whether a vertex j is reachable from another vertex i for all vertex pairs (i, j) in the given graph. Here, vertex j is reachable from another vertex i means that there is a path from vertex i to j. The reachability matrix is called the transitive closure of a graph. The directed graph is represented by an adjacency matrix where there are N vertices.</p>


# Example 1:

```bash
Input: N = 4
graph = {{1, 1, 0, 1}, 
         {0, 1, 1, 0}, 
         {0, 0, 1, 1}, 
         {0, 0, 0, 1}}
Output: {{1, 1, 1, 1}, 
         {0, 1, 1, 1}, 
         {0, 0, 1, 1}, 
         {0, 0, 0, 1}}
Explanation: 
The output list shows the reachable indexes.
```

# Example 2:

```bash
Input: N = 3
graph = {{1, 0, 0}, 
         {0, 1, 0}, 
         {0, 0, 1}
Output: {{1, 0, 0}, 
         {0, 1, 0}, 
         {0, 0, 1}
Explanation: 
The output list shows the reachable indexes.
```

<hr>

<span>Your Task:</span>
<p>You do not need to read input or print anything. Your task is to complete the function transitiveClosure() which takes an integer N and a 2D array graph(adjacency matrix of the graph) as input parameters and returns the transitive closure of the graph in the form of 2D array.</p>

```bash
Expected Time Complexity: O(N3)
Expected Auxiliary Space: O(N2)

Constraints:
1 ≤ N ≤ 100  
```

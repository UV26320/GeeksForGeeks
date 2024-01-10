## Topological Sort

<p>Problem statement</p>
<p>A Directed Acyclic Graph (DAG) is a directed graph that contains no cycles.

Topological Sorting of DAG is a linear ordering of vertices such that for every directed edge from vertex ‘u’ to vertex ‘v’, vertex ‘u’ comes before ‘v’ in the ordering. Topological Sorting for a graph is not possible if the graph is not a DAG.

Given a DAG consisting of ‘V’ vertices and ‘E’ edges, you need to find out any topological sorting of this DAG. Return an array of size ‘V’ representing the topological sort of the vertices of the given DAG.</p>


<p>Note that there are multiple topological sortings possible for a DAG. For the graph given above one another topological sorting is: {0, 3, 1, 2}</p>

```bash
Note:
1. It is guaranteed that the given graph is DAG.
2. There will be no multiple edges and self-loops in the given DAG.
3. There can be multiple correct solutions, you can find any one of them. 
4. Don’t print anything, just return an array representing the topological sort of the vertices of the given DAG.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 50
1 <= V <= 10^4
0 <= E <= 10^4
0 <= u, v < V 

Where ‘T’ is the total number of test cases, ‘V’ is the number of vertices, ‘E’ is the number of edges, and ‘u’ and ‘v’ both represent the vertex of a given graph.

Time limit: 2 sec
```
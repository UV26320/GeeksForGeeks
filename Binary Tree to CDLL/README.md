# Binary Tree to CDLL

# Medium  |  Accuracy: 71.66% 

<p>Given a Binary Tree of N edges. The task is to convert this to a Circular Doubly Linked List (CDLL) in-place. The left and right pointers in nodes are to be used as previous and next pointers respectively in CDLL. The order of nodes in CDLL must be same as Inorder of the given Binary Tree. The first node of Inorder traversal (left most node in BT) must be head node of the CDLL.</p>


# Example 1:

```bash
Input:
      1
    /   \
   3     2
Output:
3 1 2 
2 1 3
Explanation: After converting tree to CDLL
when CDLL is is traversed from head to
tail and then tail to head, elements
are displayed as in the output.
```

# Example 2:

```bash
Input:
     10
   /    \
  20    30
 /  \
40  60
Output:
40 20 60 10 30 
30 10 60 20 40
Explanation:After converting tree to CDLL,
when CDLL is is traversed from head to
tail and then tail to head, elements
are displayed as in the output.
```

<hr>

<span>Your Task:</span>
<p>You don't have to take input or print anything. Complete the function bTreeToCList() that takes root as a parameter and returns the head of the list. The driver code prints the linked list twice, first time in the right order, and another time in reverse order.</p>

```bash
Constraints:
1 <= N <= 103
1 <= Data of a node <= 104

Expected time complexity: O(N)

Expected auxiliary space: O(h) , where h = height of tree
```


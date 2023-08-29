# Delete a Node in Single Linked List

## Easy Accuracy: 39.85%


<p>Given a singly linked list and an integer x.Delete xth node from the singly linked list.</p>


# Example 1:

```bash
Input: 1 -> 3 -> 4 
       x = 3
Output: 1 -> 3
Explanation:
After deleting the node at 3rd
position (1-base indexing), the
linked list is as 1 -> 3. 
```

# Example 2:

```bash
Input: 1 -> 5 -> 2 -> 9 
x = 2
Output: 1 -> 2 -> 9
Explanation: 
After deleting the node at 2nd
position (1-based indexing), the
linked list is as 1 -> 2 -> 9.
```

<hr>

<span>Your task:</span> 
<p>Your task is to complete the method deleteNode() which takes two arguments: the address of the head of the linked list and an integer x. The function returns the head of the modified linked list.</p>

```bash
Constraints:
2 <= N <= 105
1 <= x <= N
```
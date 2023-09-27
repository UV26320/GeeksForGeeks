//{ Driver Code Starts
// Initial Template for C++// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// } Driver Code Ends
/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

Node *reverse1(Node *&head)
{

    if (head == NULL || head->next == NULL)
        return head;

    Node *smallList_Head = reverse1(head->next);

    head->next->next = head;
    head->next = NULL;

    return smallList_Head;
}

void reverse(Node *&head, Node *curr, Node *prev)
{

    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

class Solution
{
public:
    // Function to reverse a linked list.
    struct Node *reverseList(struct Node *head)
    {
        // code here
        // return head of reversed

        // 3rd approach

        return reverse1(head);

        // 1st approch
        //  Node* prev = NULL;
        //  Node* curr = head;
        //  reverse(head,curr,prev);
        //  return head;

        // 2nd approch
        // if(head == NULL || head->next== NULL) return head;

        // Node* prev = NULL;
        // Node* curr = head;
        // Node* forward = NULL;

        // while(curr != NULL){

        //     forward = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = forward;
        // }

        // return prev;
    }
};

//{ Driver Code Starts.

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T, n, l, firstdata;
    cin >> T;

    while (T--)
    {
        struct Node *head = NULL, *tail = NULL;

        cin >> n;

        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;

        for (int i = 1; i < n; i++)
        {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }

        Solution ob;
        head = ob.reverseList(head);

        printList(head);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
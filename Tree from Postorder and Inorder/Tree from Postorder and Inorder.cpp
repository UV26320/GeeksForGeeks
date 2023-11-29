//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.
 void creatMapping(int in[],map<int,int> &nodeToIndex , int n){
        
        for(int i = 0 ; i < n ; ++i){
            nodeToIndex[in[i]] = i ;
        }
    } 
   
   
Node *solve(int in[], int post[], int &index, int inOrderedStart,
    int inOrderedEnd, int n,map<int,int> &nodeToIndex) {
       
       // base case
        if (index <0 || inOrderedStart > inOrderedEnd)
            return NULL;
        
        // create a root node for element 
        int element = post[index--];
        Node *root = new Node(element);
        
        
        // int position = findPosition(in, element, n);

        // find element's index in inorder
        int position = nodeToIndex[element];
        

        if (position == -1) {
            delete root;
            return NULL;
        }

        root->right = solve(in, post, index, position + 1, inOrderedEnd, n,nodeToIndex);
        root->left = solve(in, post, index, inOrderedStart, position - 1, n,nodeToIndex);

        return root;
    }


Node *buildTree(int in[], int post[], int n) {
    // Your code here
    
        if (n == 0) return NULL;
        int postOrderIndex = n - 1;
        
        map<int,int>nodeToIndex;
        
        // creating nodes to index mapping 
        creatMapping(in,nodeToIndex,n);

        Node *ans = solve(in, post, postOrderIndex, 0, n - 1, n,nodeToIndex);
        return ans;
    
}

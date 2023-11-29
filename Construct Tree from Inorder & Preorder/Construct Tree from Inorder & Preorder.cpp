//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void printPostOrder(Node *root)
{
    if (root == NULL)
        return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution {
private:
    
    void creatMapping(int in[],map<int,int> &nodeToIndex , int n){
        
        for(int i = 0 ; i < n ; ++i){
            nodeToIndex[in[i]] = i ;
        }
    } 
   
    // int findPosition(int in[], int element, int n) {
    //     for (int i = 0; i < n; i++) {
    //         if (in[i] == element)
    //             return i;
    //     }
    //     return -1;
    // }

    Node *solve(int in[], int pre[], int &index, int inOrderedStart,
    int inOrderedEnd, int n,map<int,int> &nodeToIndex) {
       
       // base case
        if (index >= n || inOrderedStart > inOrderedEnd)
            return NULL;
        
        // create a root node for element 
        int element = pre[index++];
        Node *root = new Node(element);
        
        
        // int position = findPosition(in, element, n);

        // find element's index in inorder
        int position = nodeToIndex[element];
        

        if (position == -1) {
            delete root;
            return NULL;
        }

        root->left = solve(in, pre, index, inOrderedStart, position - 1, n,nodeToIndex);
        root->right = solve(in, pre, index, position + 1, inOrderedEnd, n,nodeToIndex);

        return root;
    }

public:
    Node *buildTree(int in[], int pre[], int n) {
        if (n == 0)
            return NULL;
            
        map<int,int>nodeToIndex;
        
        // creating nodes to index mapping 
        
        creatMapping(in,nodeToIndex,n);

        int preOrderIndex = 0;
        Node *ans = solve(in, pre, preOrderIndex, 0, n - 1, n,nodeToIndex);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int inorder[n], preorder[n];
        for (int i = 0; i < n; i++)
            cin >> inorder[i];
        for (int i = 0; i < n; i++)
            cin >> preorder[i];
        Solution obj;
        Node *root = obj.buildTree(inorder, preorder, n);
        printPostOrder(root);
        cout << endl;
    }
}

// } Driver Code Ends
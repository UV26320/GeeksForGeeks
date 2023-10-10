//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Utility function to create a new Tree Node
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

// } Driver Code Ends
/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

class Solution
{
private:
    map<Node *, Node *> parent;

    // Function to set the parent of each node in the tree
    void setParent(Node *root)
    {
        parent[root] = NULL;
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            while (n--)
            {
                Node *temp = q.front();
                q.pop();
                if (temp->left)
                {
                    parent[temp->left] = temp;
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    parent[temp->right] = temp;
                    q.push(temp->right);
                }
            }
        }
    }

    // Function to find the target node with a given value
    Node *getTargetNode(Node *root, int targetValue)
    {
        if (!root)
            return NULL;
        if (root->data == targetValue)
            return root;
        Node *left = getTargetNode(root->left, targetValue);
        if (left)
            return left;
        return getTargetNode(root->right, targetValue);
    }

    // Function to perform BFS and return a list of values at K distance
    vector<int> bfs(Node *target, int k)
    {
        vector<int> ans;
        queue<Node *> q;
        map<Node *, bool> traverse;

        q.push(target);
        traverse[target] = true;

        while (!q.empty() && k >= 0)
        {
            int n = q.size();
            while (n--)
            {
                Node *temp = q.front();
                q.pop();
                if (k == 0)
                    ans.push_back(temp->data);

                if (temp->left && !traverse[temp->left])
                {
                    traverse[temp->left] = true;
                    q.push(temp->left);
                }
                if (temp->right && !traverse[temp->right])
                {
                    traverse[temp->right] = true;
                    q.push(temp->right);
                }
                if (parent[temp] && !traverse[parent[temp]])
                {
                    traverse[parent[temp]] = true;
                    q.push(parent[temp]);
                }
            }
            k--;
        }

        sort(ans.begin(), ans.end());
        return ans;
    }

public:
    vector<int> KDistanceNodes(Node *root, int target, int k)
    {
        setParent(root);
        Node *targetNode = getTargetNode(root, target);
        if (!targetNode)
            return {}; // Target not found
        return bfs(targetNode, k);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    getchar();

    Solution x = Solution();

    while (t--)
    {
        string s;
        getline(cin, s);
        Node *head = buildTree(s);

        int target, k;
        cin >> target >> k;
        getchar();

        vector<int> res = x.KDistanceNodes(head, target, k);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int indx = -1;
Node *buildTree(vector<int> preorder)
{
    indx++;
    if (preorder[indx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(preorder[indx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}
void levelOrder(Node *root)
{
    queue<Node *> q; // queue formed
    q.push(root);
    while (q.size() > 0)
    {
        Node *curr = q.front(); // pop out the root value
        q.pop();
        cout << curr->data << " "; // printing the current values
        if (curr->left != NULL)
        {
            q.push(curr->left); // pulling out the left value which is not null
        }
        if (curr->right != NULL) // pulling out the right value which is not null
        {
            q.push(curr->right);
        }
    }
    cout << endl;
}
int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    levelOrder(root); // 1stlevel->2ndlevel->3rd level->dont print null value
    return 0;
}

#include <iostream>
#include <vector>
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
Node *buildTree(vector<int> order)
{
    indx++;
    if (order[indx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(order[indx]);
    root->left = buildTree(order);
    root->right = buildTree(order);
    return root;
}
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " "; // printing root value
    preOrder(root->left);      // traversing right tree
    preOrder(root->right);     // traversing left tree
}
int main()
{
    vector<int> order = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(order);
    cout << root->data << endl; // printing root of the tree
    preOrder(root);             // root->left->right
    cout << endl;
    return 0;
}
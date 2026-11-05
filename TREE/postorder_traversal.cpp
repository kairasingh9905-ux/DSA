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
    Node *root = new Node(order[indx]); // root found
    root->left = buildTree(order);      // for left
    root->right = buildTree(order);     // for right
    return root;
}
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    preorder(root->left);      // for left node
    preorder(root->right);     // for right node
    cout << root->data << " "; // for root value
}
int main()
{
    vector<int> order = {3, 4, -1, -1, 5, 6, -1, -1, 2, -1, -1};
    Node *root = buildTree(order);
    preorder(root); // left->right->root
    cout << endl;
    return 0;
}
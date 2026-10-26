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
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    preorder(root->left);
    preorder(root->right);
    cout << root->data << " ";
}
int main()
{
    vector<int> order = {3, 4, -1, -1, 5, 6, -1, -1, 2, -1, -1};
    Node *root = buildTree(order);
    preorder(root); // left->right->root
    cout << endl;
    return 0;
}
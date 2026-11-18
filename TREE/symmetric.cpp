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
bool symmetricCheck(Node *left, Node *right)
{
    if (left == NULL || right == NULL)
    {
        return left == right;
    }
    if (left->data != right->data)
    {
        return false;
    }
    return symmetricCheck(left->left, right->right) && symmetricCheck(left->right, right->left);
}
bool isSymmetric(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    return symmetricCheck(root->left, root->right); // another function to check wheather the left and right tree
}
int main()
{
    vector<int> preorder = {1, 2, -1, -1, 2, -1, -1};
    Node *root = buildTree(preorder);
    cout << "Is Symmetric:" << isSymmetric(root) << endl;
    return 0;
}

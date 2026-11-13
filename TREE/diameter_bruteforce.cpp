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
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1;
}
int diameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftDiam = diameter(root->left);
    int rightDiam = diameter(root->right);
    int currDiam = height(root->left) + height(root->right);
    return max(currDiam, max(leftDiam, rightDiam));
}
int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    cout << "Diameter:" << diameter(root) << endl;
    return 0;
}
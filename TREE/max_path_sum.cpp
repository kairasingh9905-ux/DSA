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
int maximum = INT_MIN; // to handle the -ve value
int maxPath(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftPathSum = maxPath(root->left);                           // find maximum sum in left tree
    int rightPathSum = maxPath(root->right);                         // find maximum value in right tree
    maximum = max(maximum, root->data + leftPathSum + rightPathSum); // value of maximum
    return root->data + max(leftPathSum, rightPathSum);              // returning the value
}
int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    maxPath(root);
    cout << "maximum path sum:" << maximum << endl; // providing the global value
    return 0;
}

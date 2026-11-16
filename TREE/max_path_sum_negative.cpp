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
int maximum = INT_MIN;
int findingMax(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftPathSum = max(0, findingMax(root->left));
    int rightPathSum = max(0, findingMax(root->right));
    maximum = max(maximum, root->data + leftPathSum + rightPathSum);
    return root->data + max(leftPathSum, rightPathSum);
}
int maxPathSum(Node *root)
{
    findingMax(root);
    return maximum;
}
int main()
{
    vector<int> preorder = {-10, 9, -1, -1, 20, 15, -1, -1, 7, -1, -1};
    Node *root = buildTree(preorder);
    maxPathSum(root);
    cout << "Maximum path Sum: " << maximum << endl;
    return 0;
}
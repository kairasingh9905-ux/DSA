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
Node *BuildTree(vector<int> preorder)
{
    indx++;
    if (preorder[indx] == -1) // base case
    {
        return NULL;
    }
    Node *root = new Node(preorder[indx]);
    root->left = BuildTree(preorder);  // for left tree
    root->right = BuildTree(preorder); // for right tree
    return root;
}
int height(Node *root)
{
    if (root == NULL) // base case
    {
        return 0;
    }
    int left_Height = height(root->left);      // finding height of the left  subtree
    int right_Height = height(root->right);    // finding height of right subtree
    return max(left_Height, right_Height) + 1; // max of both +1
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = BuildTree(preorder);
    cout << "Height of tree:" << height(root) << endl;
}
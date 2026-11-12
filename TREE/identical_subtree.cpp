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
Node *BuildTree(vector<int> p)
{
    indx++;
    if (p[indx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(p[indx]);
    root->left = BuildTree(p);
    root->right = BuildTree(p);
    return root;
}
int i = -1;
Node *BuildSubTree(vector<int> q)
{
    i++;
    if (q[i] == -1)
    {
        return NULL;
    }
    Node *subroot = new Node(q[i]);
    subroot->left = BuildSubTree(q);
    subroot->right = BuildSubTree(q);
    return subroot;
}
bool isIdentical(Node *root, Node *subroot)
{
    if (root == NULL || subroot == NULL)
    {
        return root == subroot;
    }
    bool isLeftSame = isIdentical(root->left, subroot->left);
    bool isRightSame = isIdentical(root->right, subroot->right);
    return isLeftSame && isRightSame && root->data == subroot->data;
}
bool isSubTree(Node *root, Node *subroot)
{
    if (root == NULL || subroot == NULL)
    {
        return root == subroot;
    }
    if ((root->data == subroot->data) || isIdentical(root, subroot))
    {
        return true;
    }
    return isSubTree(root->left, subroot) || isSubTree(root->right, subroot);
}
int main()
{
    vector<int> p = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    vector<int> q = {3, 4, -1, -1, 5, -1, -1};
    Node *root = BuildTree(p);
    Node *subroot = BuildSubTree(q);
    cout << isSubTree(root, subroot) << endl;
    return 0;
}
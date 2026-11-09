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
Node *BuildTree1(vector<int> p)
{
    indx++;
    if (p[indx] == -1)
    {
        return NULL;
    }
    Node *root1 = new Node(p[indx]);
    root1->left = BuildTree1(p);
    root1->right = BuildTree1(p);
    return root1;
}
int i = -1;
Node *BuildTree2(vector<int> q)
{
    i++;
    if (q[i] == -1)
    {
        return NULL;
    }
    Node *root2 = new Node(q[i]);
    root2->left = BuildTree2(q);
    root2->right = BuildTree2(q);
    return root2;
}
bool isIdentical(Node *root1, Node *root2)
{
    if (root1 == NULL || root2 == NULL)
    {
        return root1 == root2;
    }
    bool isLeftSame = isIdentical(root1->left, root2->left);
    bool isRightSame = isIdentical(root1->right, root2->right);
    return isLeftSame && isRightSame && root1->data == root2->data;
}
int main()
{
    vector<int> p = {1, 2, -1, -1, 3, -1, -1};
    vector<int> q = {1, 2, -1, -1, 3, -1, -1};
    Node *root1 = BuildTree1(p);
    Node *root2 = BuildTree2(q);
    cout << isIdentical(root1, root2) << endl;
}
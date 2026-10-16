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
void inOrder(Node *root)

{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data;
    inOrder(root->right);
}
int main()
{
    vector<int> order = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(order);
    cout << root->data << endl;
    inOrder(root);
    cout << endl;
    return 0;
}
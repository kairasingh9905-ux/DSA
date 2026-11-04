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
    if (preorder[indx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(preorder[indx]);
    root->left = BuildTree(preorder);
    root->right = BuildTree(preorder);
    return root;
}
int count_node(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_count = count_node(root->left);   // count the left nodes
    int right_count = count_node(root->right); // count the right nodes
    return left_count + right_count + 1;       // left nodes+right nodes+root node
}
int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = BuildTree(preorder);
    cout << "count of nodes: " << count_node(root) << endl;
}

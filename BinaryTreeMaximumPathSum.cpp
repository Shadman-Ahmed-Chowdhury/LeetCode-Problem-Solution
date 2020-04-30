/**

Given a non-empty binary tree, find the maximum path sum.

For this problem, a path is defined as any sequence of nodes from some starting node to any node in the tree
along the parent-child connections. The path must contain at least one node and does not need to go through the root.

Example 1:

Input: [1,2,3]

       1
      / \
     2   3

Output: 6
Example 2:

Input: [-10,9,20,null,null,15,7]

   -10
   / \
  9  20
    /  \
   15   7

Output: 42

**/


#include <bits/stdc++.h>

using namespace std;

class TreeNode {
public:
    int data;
    TreeNode *left, *right;
};

TreeNode *newNode(int newData)
{
    TreeNode *node = new TreeNode();
    node->data = newData;
    node->left = node->right = NULL;
    return node;
}

int max_sum;
int pathSum(TreeNode* root) {
    if(root == NULL)
        return 0;
    int l = pathSum(root->left);
    int r = pathSum(root->right);

    int max_single = max(max(l, r) + root->data, root->data);
    int max_top = max(max_single, l + r + root->data);
    max_sum = max(max_sum, max_top);
    return max_single;
}

int maxPathSum(TreeNode* root) {
    max_sum = INT_MIN;
    pathSum(root);
    return max_sum;
}




int main()
{
    TreeNode *root = newNode(10);
    root->left        = newNode(2);
    root->right       = newNode(10);
    root->left->left  = newNode(20);
    root->left->right = newNode(1);
    root->right->right = newNode(-25);
    root->right->right->left   = newNode(3);
    root->right->right->right  = newNode(4);

    cout << maxPathSum(root) << endl;
    return 0;
}

/**

Output:

42

**/


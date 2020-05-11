/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    map <int, int> level, parent;
    void printPreOrder(TreeNode *root)
    {
        if(root == NULL)
            return;

        //cout << root->data << " ";
        if(root->left != NULL)
            level[root->left->val] = level[root->val] + 1, parent[root->left->val] = root->val;
        if(root->right != NULL)
            level[root->right->val] = level[root->val] + 1, parent[root->right->val] = root->val;

        printPreOrder(root->left);
        printPreOrder(root->right);
    }

    bool isCousins(TreeNode* root, int x, int y) {
        printPreOrder(root);
        if(level[x] == level[y] && parent[x] != parent[y])
            return true;
        return false;
    }
};

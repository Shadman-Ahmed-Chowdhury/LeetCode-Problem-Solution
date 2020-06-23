
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
    int cnt = 0;
    void printPostOrder(TreeNode *root)
    {
        if(root == NULL)
            return;
        printPostOrder(root->left);
        printPostOrder(root->right);
        cnt++;
    }
public:
    int countNodes(TreeNode* root) {
        printPostOrder(root);
        return cnt;
    }
};

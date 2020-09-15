
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
    int sumRootToLeaf(TreeNode* root) {
        if(!root)
            return 0;
        int result = 0;
        findSum(root, 0, result);
        return result;
    }
    void findSum(TreeNode* root, int val, int& result) {
        int curr = val * 2 + root->val;

        if(!root->left && !root->right) {
            result += curr;
            return;
        }
        if(root->left) {
            findSum(root->left, curr, result);
        }
        if(root->right) {
            findSum(root->right, curr, result);
        }
    }
};

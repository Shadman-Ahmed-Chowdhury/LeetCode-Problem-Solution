
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
    int dfs(TreeNode* node, int num, int sum) {
        if(node == NULL)
            return sum;
        num = (num * 10) + node->val;

        if(node->left == NULL && node->right == NULL) {
            sum += num;
            return sum;
        }
        sum = dfs(node->left, num, sum) + dfs(node->right, num, sum);
        return sum;
    }
public:
    int sumNumbers(TreeNode* root) {
        if(root == NULL)
            return 0;
        return dfs(root, 0, 0);
    }
};

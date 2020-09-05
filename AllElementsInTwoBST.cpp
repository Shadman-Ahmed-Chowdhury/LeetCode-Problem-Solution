class Solution {

public:
    vector <int> v;
    void printInOrder(TreeNode *root)
    {
        if(root == NULL)
            return;
        printInOrder(root->left);
        v.push_back(root->val);
        printInOrder(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {

        printInOrder(root1);
        printInOrder(root2);

        sort(v.begin(), v.end());
        return v;
    }
};

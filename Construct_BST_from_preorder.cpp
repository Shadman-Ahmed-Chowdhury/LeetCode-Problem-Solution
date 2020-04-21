class Solution
{
public:
    TreeNode* newNode(int data)
    {
        TreeNode *temp = new TreeNode();

        temp->val = data;
        temp->left = temp->right = NULL;

        return temp;
    }

    int cnt =0 ;
    TreeNode* create(vector <int>& preorder, int constraint)
    {

        TreeNode* node = newNode(preorder[cnt]);
        cnt++;
        if(cnt < preorder.size() && preorder[cnt] < node->val) {
            node->left = create(preorder, node->val);
        }

        if(cnt < preorder.size() && preorder[cnt] < constraint) {
            node->right = create(preorder, constraint);
        }
        return node;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder)
    {
        if(preorder.size() < 1)
            return NULL;
        return create(preorder, INT_MAX);
    }


};

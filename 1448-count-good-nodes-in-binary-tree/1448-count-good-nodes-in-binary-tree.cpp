class Solution 
{
    public:
    int c=0;
    void result(TreeNode* root, int maximum)
    {
        if(root != NULL)
        {
            if(root->val >= maximum)
                c++;
            result(root->left,  max(root->val, maximum));
            result(root->right, max(root->val, maximum));
        }
    }
    int goodNodes(TreeNode* root) 
    {
        result(root, root->val);
        return c;
    }
};

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
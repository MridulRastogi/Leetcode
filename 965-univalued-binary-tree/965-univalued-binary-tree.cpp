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
class Solution 
{
    public:
    bool flag = true;
    void inorder(TreeNode* root, int val)
    {
        if(root==NULL)
            return;
        inorder(root->left, val);
        if(val!=root->val)
            flag = false;
        inorder(root->right, val);
    }
    
    bool isUnivalTree(TreeNode* root) 
    {
        inorder(root, root->val);
        return flag;
    }
};
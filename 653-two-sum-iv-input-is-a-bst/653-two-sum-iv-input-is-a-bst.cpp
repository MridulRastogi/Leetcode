
class Solution 
{
    public:
    TreeNode* head;
    bool res = false, res2 = false;
    
    void search(TreeNode* root, TreeNode* z, int value)
    {
        if(!root)
            return;
        if(root->val == value and root != z)
        {
            res2 = true;
            return;
        }
        search(root->left, z, value);
        search(root->right, z, value);
    }
    
    void preorder(TreeNode* root, int k)
    {
        if(!root)
            return;
        if(!res2)
        {
            search(head, root, k-(root->val));   
            if(res2)
            {
                res = true;
                return;
            }
        }
        if(res2)
            return;
        preorder(root->left, k);
        preorder(root->right, k);
    }
    
    bool findTarget(TreeNode* root, int k) 
    {
        head = root;
        preorder(root, k);       
        return res;
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
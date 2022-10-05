class Solution 
{
    public:
    void solve(TreeNode* root, int val, int depth, int level)
    {
        if(root == NULL)
            return;
        if(level == depth-1)
        {
            TreeNode* left_side  = new TreeNode(val);
            TreeNode* right_side = new TreeNode(val);
            
            left_side->left = root->left;
            root->left      = left_side;
            
            right_side->right = root->right;
            root->right       = right_side;
        }
        solve(root->left , val, depth, level+1);
        solve(root->right, val, depth, level+1);
    }    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) 
    {
        if(depth == 1)
            
        {
            TreeNode* ptr = new TreeNode(val);
            ptr->left = root;
            return ptr;
        }
        solve(root, val, depth, 1);
        return root;
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
class Solution 
{
    public:
    bool res=false;
    void traverse(TreeNode* root, vector<int>& path, int target)
    {
        if(root == NULL)
            return;
        
        target -= root->val;
        path.push_back(root->val);
        
        if(root->left == NULL and root->right == NULL)
        {
            if(target == 0)
            {
                res = true;
                return;
            }
        }
        else
        {
            traverse(root->left , path, target);
            traverse(root->right, path, target);
        }
        
        path.pop_back();
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        vector<int> path;
        traverse(root, path, targetSum);
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
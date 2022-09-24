class Solution 
{
    public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        vector<vector<int>> result;
        vector<int> path;
        traverse(root, targetSum, path, result);
        return result;
    }
    void traverse(TreeNode* root, int target, vector<int>& path, vector<vector<int>>& result) 
    {
        if(root==NULL) 
            return; 
        path.push_back(root->val);
        target = target-root->val;
        if (root->left==NULL and root->right==NULL) 
        {
            if (target == 0)                 
            {
                result.push_back(path);
            }
        }
        else 
        {
            traverse(root->left , target, path, result);
            traverse(root->right, target, path, result);
        }
        path.pop_back();
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
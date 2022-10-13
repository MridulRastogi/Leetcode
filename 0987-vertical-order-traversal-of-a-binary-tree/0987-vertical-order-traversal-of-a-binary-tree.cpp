class Solution 
{
    public:
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        map<int , map<int , multiset<int>>> mp;
        vector<vector<int>> result;
        queue<pair<TreeNode* , pair<int , int>>> q;
        int x, y;
        q.push({root , {0,0}});
        while(!q.empty())
        {
            root  = q.front().first;
             x    = q.front().second.first;
             y    = q.front().second.second;
            q.pop();
            mp[x][y].insert(root->val);
            if(root->left)
                q.push(make_pair(root->left , make_pair(x-1, y+1)));
            if(root->right) 
                q.push(make_pair(root->right, make_pair(x+1, y+1)));
        }
        for(auto it:mp)
        {
            vector<int> v;
            for(auto it1 : it.second)
                for(auto it2 : it1.second) 
                    v.push_back(it2);
            result.push_back(v);
        }
        return result;
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
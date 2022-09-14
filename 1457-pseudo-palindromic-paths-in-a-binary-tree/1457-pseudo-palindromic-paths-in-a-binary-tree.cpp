class Solution 
{
    public:
    
    int calculate(TreeNode* root, vector<int>& vec)
    {
        if(root==NULL)    // if the root is null then the max value that can be returned is 0
            return 0;
        
        int value = root->val;    // extracting the value at the defined root in the parameters
        vec[value]++;             // incrementing the frequency of the value extracted in the vector
        
        if(root->left == NULL and root->right == NULL)      // if root is equal to NULL then: it means we have completed one of our paths
        {
            int counter = 0;      // initialize a counter with 0 to calculate the number of elements having a frequency equivalent to zero in a path
            for(int i=1; i<=9; i++)     // making a run from 1 to 9 because these are the only range of elements present in the vector  
            {
                if(vec[i]%2 == 1)       // if the number of elements having a frequency by the end of the path is odd then a counter increments because then
                    counter++;                  //  the elements can not be divided in way to form a palindromic string/number
                if(counter>1)           // if the counter is greater than 1, then we:-
                {
                    vec[value]--;               // decrement the frequency for future transactions of frequencies
                    return 0;
                }
            }
            vec[value]--;                       
            return (counter<=1);                // returning a particular/base value according to some particular conditions
        }
        
        int lef = calculate(root->left , vec);  // traversing the paths from the left of the root
        int rig = calculate(root->right, vec);  // traversing the paths from the right of the root
        
        vec[value]--;
        
        return lef+rig;                         // anwer value returned.
    }
    
    
    int pseudoPalindromicPaths (TreeNode* root) 
    {
        vector<int> vec(10);
        int result = calculate(root, vec);
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
class Solution 
{
    boolean res = false;
    public void traverse(TreeNode root, ArrayList<Integer> path, int target)
    {
        if(root == null)
            return;
        
        path.add(root.val);
        target -= root.val;
        
        if(root.left == null && root.right == null)
        {
            if(target == 0)
            {
                res = true;
                return;
            }
        }
        else
        {
            traverse(root.left , path, target);
            traverse(root.right, path, target);
        }
        path.remove(path.size()-1);
    }
    public boolean hasPathSum(TreeNode root, int targetSum) 
    {
        ArrayList<Integer> path = new ArrayList<Integer>();
        traverse(root, path, targetSum);
        return res;
    }
}

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
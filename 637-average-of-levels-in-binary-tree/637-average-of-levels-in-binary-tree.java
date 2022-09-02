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
class Solution 
{
    public static void levelOrder(TreeNode root, ArrayList<Double> ar)
	{
		Queue<TreeNode> q = new LinkedList<>();
		q.add(root);
		q.add(null);
		
        long s=0;
        int c=0;
		while(q.isEmpty()==false)
		{
			TreeNode currentNode = q.remove();
			if(currentNode == null)
			{
                double res = (double)s/c;
                ar.add(res);
                s=0;
                c=0;
				//System.out.println();
				if(q.isEmpty()==true)
					break;
				else
					q.add(null);
			}
			else
			{
                s += currentNode.val;
                c++;
				//System.out.println(currentNode.val + " " + s);
				if(currentNode.left != null)
					q.add(currentNode.left);
				if(currentNode.right != null)
					q.add(currentNode.right);
			}				
		}
	}
    
    public List<Double> averageOfLevels(TreeNode root) 
    {
        ArrayList<Double> ar = new ArrayList<Double>();
        levelOrder(root, ar);
        return ar;        
    }
}
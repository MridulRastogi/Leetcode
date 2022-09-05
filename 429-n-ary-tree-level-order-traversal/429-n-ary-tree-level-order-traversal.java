class Solution 
{
    public List<List<Integer>> levelOrder(Node root) 
    {
         List<List<Integer>> arr = new ArrayList<List<Integer>>();
        if(root == null)
            return arr;
        
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        
        while(q.isEmpty() == false)
        {
            int len = q.size();
            List<Integer> ar = new ArrayList<Integer>();
            while(len > 0)
            {
                Node ptr = q.remove();
                ar.add(ptr.val);
                
                for(int i=0; i<ptr.children.size(); i++)
                    q.add(ptr.children.get(i));
                len--;            
            }          
            arr.add(ar);
        }
        return arr;
    }
}

/*
// Definition for a Node.
class Node 
{
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) 
    {
        val = _val;
    }

    public Node(int _val, List<Node> _children) 
    {
        val = _val;
        children = _children;
    }
};
*/
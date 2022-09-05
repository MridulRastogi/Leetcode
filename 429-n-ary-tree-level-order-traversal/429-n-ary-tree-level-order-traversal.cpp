class Solution 
{
    public:
    vector<vector<int>> levelOrder(Node* root) 
    {
        vector<vector<int>> vec;
        if(root == NULL)
            return vec;
        
        queue<Node *> q;
        q.push(root);
        
        while(q.empty() == false)
        {
            int len = q.size();
            vector<int> v;
            while(len>0)
            {
                Node* ptr = q.front();
                q.pop();
                v.push_back(ptr->val);
            
                for(int i=0; i<ptr->children.size(); i++)
                    q.push(ptr->children[i]);
                len--;
            }
            vec.push_back(v);
        }   
        
        return vec;
    }
};

/*
    class Node 
    {
        public:
        int val;
        vector<Node*> children;

        Node() {}

        Node(int _val) 
        {
            val = _val;
        }

        Node(int _val, vector<Node*> _children) 
        {
            val = _val;
            children = _children;
        }
    };
*/
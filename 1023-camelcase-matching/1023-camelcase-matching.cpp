class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) 
    {
        int l = pattern.length(), c, count=0, lit;
        vector<bool> res;
        bool flag;
        for(int i=0; i<queries.size(); i++)
        {
            c=0;
            flag = true;
            for(int j=0; j<queries[i].length(); j++)
            {
                if(queries[i][j]==pattern[c] and c<l)
                {
                    c++;
                    lit = j;
                }    
                else if(queries[i][j]!=pattern[c] and isupper(queries[i][j]))
                    flag = false;
            }
            if(flag == false or c!=l) 
                res.push_back(false);
            else if(flag == true and c==l)
                res.push_back(true);
        }
        return res;
    }
};
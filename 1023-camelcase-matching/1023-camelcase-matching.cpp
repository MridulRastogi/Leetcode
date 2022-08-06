class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) 
    {
        int l = pattern.length(), c;
        bool flag;
        vector<bool> res;
        for(int i=0; i<queries.size(); i++)
        {
            c=0;
            flag = true;
            for(int j=0; j<queries[i].length(); j++)
            {
                if(queries[i][j]==pattern[c] and c<l)
                    c++;
                else if(queries[i][j]!=pattern[c] and isupper(queries[i][j]))
                    flag = false;
            }
            res.push_back((flag==true and c==l) ? true : false);
        }
        return res;
    }
};
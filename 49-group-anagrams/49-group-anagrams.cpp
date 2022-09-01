class Solution 
{
    public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> res;
        vector<string> v, st = strs;
        int i, j, len, minimum;
        
        for(i=0; i<st.size(); i++)
        {
            string s = st[i];
            sort(s.begin(), s.end());
            st[i] = s;
        }
        
        len = st.size();
        for(i=0; i<len-1; i++)
        {
            minimum = i;
            for(j=i+1; j<len; j++)
                if(st[j] < st[minimum])
                    minimum = j;
            swap(  st[i],   st[minimum]);
            swap(strs[i], strs[minimum]);
        }
        
        v.push_back(strs[0]);
        for(i=0; i<len-1; i++)
        {
            if(st[i]==st[i+1])
                v.push_back(strs[i+1]);
            else
            {
                res.push_back(v);
                v.clear();
                v.push_back(strs[i+1]);
            }
        }
        res.push_back(v);

        return res;   
    }
};
class Solution 
{
    public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;
        vector<string> st=strs;
        int i, j, len = st.size(), minimum;

        for(i=0; i<st.size(); i++)
            sort(st[i].begin(), st[i].end());
        for(int i=0; i<len; i++)
            mp[st[i]].push_back(strs[i]);
        for(auto it:mp)
            res.push_back(it.second);
        return res;   
    }
};
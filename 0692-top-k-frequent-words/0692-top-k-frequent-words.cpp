class Solution 
{
    public:
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        unordered_map<string, int> m;
        unordered_map<int, vector<string>> mp;
        vector<string> res, r;
        int mf=0;
        
        for(string s:words)
        {
            m[s]++;
            mf = max(mf, m[s]);
        }
        
        for(auto it:m)
            mp[it.second].push_back(it.first);    
        
        for(int i=mf; i>=0 and k>0; i--)
        {
            if(mp.find(i) != mp.end())
            {
                sort(mp[i].begin(), mp[i].end());
                for(int j=0; j<mp[i].size() and k>0; j++)
                {
                    res.push_back(mp[i][j]);
                    k--;
                }
            }
        }
        return res;      
    }
};
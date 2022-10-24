class Solution 
{
    public:
    int result=0;

    bool unique_string(string s)
    {
        unordered_map<char, int> mp;
        for(char ch:s)
        {
            mp[ch]++;
            if(mp[ch] > 1)
                return false;
        }
        return true;
    }
    
    void helper(vector<string>& vec, int i, int n, string s)
    {
        
        if(unique_string(s) == false)
            return;
        if(i == n)
        {
            int len = s.length();
            if(len > result)
                result = max(result, len);
            return;
        }
        helper(vec, i+1, n, s);
        helper(vec, i+1, n, s+vec[i]);
    }
    
    int maxLength(vector<string>& vec) 
    {
        helper(vec, 0, vec.size(), "");         // (vec, i, n, s)
        return result;
    }
};
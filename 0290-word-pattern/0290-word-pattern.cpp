class Solution 
{
    public:
    bool wordPattern(string pattern, string s) 
    {
        unordered_map<char, string> mp;
        unordered_map<string, char> vp;
        vector<string> vec;
        string s2 = "";
        s += " ";
        for(int i=0; i<s.length(); i++)    
        {
            if(s[i] != ' ')
                s2 += s[i];
            else
            {
                vec.push_back(s2);
                s2 = "";
            }
        }
        if(pattern.length() != vec.size())
            return false;
        for(int i=0; i<pattern.length(); i++)
        {
            if(mp.find(pattern[i]) == mp.end() and vp.find(vec[i]) == vp.end())
            {
                mp[pattern[i]] = vec[i];
                vp[vec[i]] = pattern[i];
            }
            else if(mp[pattern[i]] != vec[i] and vp[vec[i]] != pattern[i])
                return false;
        }      
        return true;
    }
};

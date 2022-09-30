class Solution 
{
    public:
    int maintainer[26];
    int find(int ele) 
    {
        return (maintainer[ele]==ele ? (ele) : maintainer[ele] = find(maintainer[ele]));
    }
    bool equationsPossible(vector<string>& equations) 
    {
        for(int i=0; i<26; i++) 
            maintainer[i] = i;
        
        for (auto s : equations) 
            if(s[1] == '=') 
                maintainer[find(s[0]-'a')] = find(s[3]-'a'); 
        
        for(auto s : equations) 
            if(s[1] == '!' and find(s[0]-'a')==find(s[3]-'a')) 
                return false;
        
        return true;
    }
};
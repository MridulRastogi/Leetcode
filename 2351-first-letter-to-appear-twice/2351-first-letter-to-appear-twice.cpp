class Solution {
public:
    char repeatedCharacter(string s) 
    {
        map<char, vector<int>> m;
        for(int i=0; i<s.length()-1; i++)
        {
            m[s[i]].push_back(i);
            if(s[i]==s[i+1] || m[s[i]].size()==2)
                return s[i];
        }
        m[s[s.length()-1]].push_back(s[s.length()-1]);
        for(int i=0; i<s.length(); i++)
            if(m[s[i]].size()>=2)
                return s[i];
        return s[0];
    }
};
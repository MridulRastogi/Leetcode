class Solution {
public:
    int firstUniqChar(string s) 
    {
        map<char, vector<int>> m;
        for(int i=0; i<s.length(); i++)
            m[s[i]].push_back(i);
        for(int i=0; i<s.length(); i++)
            if(m[s[i]].size()==1)
                return i;            
        return -1;
    }
};
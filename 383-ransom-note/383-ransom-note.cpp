class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char, int> r,m;
        for(char ch:ransomNote)
            r[ch]++;
        for(char ch:magazine)
            m[ch]++;
        for(auto it:r)
        {
            if(m.find(it.first) == m.end())
                return false;
            else 
            {
                auto pos = m.find(it.first);
                if(pos->second < it.second)
                    return false;
            }
        }
        return true;
    }
};
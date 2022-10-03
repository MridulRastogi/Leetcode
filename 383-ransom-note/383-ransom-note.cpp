class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        int r[26]={0}, m[26]={0};
        for(char ch:ransomNote)
            r[ch-'a']++;
        for(char ch:magazine)
            m[ch-'a']++;
        for(int i=0; i<26; i++)
            if(m[i]<r[i] && r[i]>0)
                return false;
        return true;
    }
};
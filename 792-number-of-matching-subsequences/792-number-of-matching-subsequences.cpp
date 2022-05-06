class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) 
    {
        int l = s.length(), l2, c, d=0;
        unordered_map<string, int> m;
        
        for(int i=0; i<words.size(); i++)
        {
            if(m.find(words[i])==m.end())
                m[words[i]]=1;
            else
                m[words[i]]++;
        }
        
        for(auto j:m)
        {
            c=0;
            l2 = j.first.length();
            for(int i=0; i<l; i++)
            {
                if(s[i] == j.first[c])
                { 
                    c++;
                    if(c==l2)
                        break;
                }
            }
            if(c==l2)
                d += j.second;
        }
        return d;
    }
};
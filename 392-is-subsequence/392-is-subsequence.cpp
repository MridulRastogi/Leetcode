class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ls = s.length(), lt = t.length(), c=0;
        for(int i=0; i<lt; i++)
        {
            if(t[i]==s[c])
                c++;
        }
        return c==ls;        
    }
};
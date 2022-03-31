class Solution {
public:
    string toLowerCase(string s) {
        string s2="";
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>=65 and s[i]<=90)
                s2 += char(int(s[i])+32);
            else
                s2 += s[i];
        }
        return s2;
    }
};
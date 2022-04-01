class Solution {
public:
    string reverseWords(string s) 
    {
        string s2="", s3="", rev="";
        s+=' ';
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!=' ')
            {
                s2 = s[i] + s2;
            }
            else
            {
                if(i==s.length()-1)
                    s3 += s2;
                else 
                    s3 += s2 + " ";
                s2 = "";
            }
        }
        return s3;
    }
};
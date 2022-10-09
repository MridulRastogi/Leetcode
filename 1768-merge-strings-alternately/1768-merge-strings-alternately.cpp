class Solution 
{
    public:
    string mergeAlternately(string word1, string word2) 
    {
        int l1=word1.length(), l2=word2.length(), c=0, d=0;
        string s="";

        while(s.length() < (l1+l2))
        {
            if(c<l1 and d<l2)
            {
                s = s + word1[c] + word2[d];
                c++;
                d++;
            }
            else if(c<l1 and d==l2)
            {
                s = s + word1.substr(c);
                c = l1;
            }
            else if(c==l1 and d<l2)
            {
                s = s + word2.substr(d);
                d = l2;
            }
        }
        return s;
    }
};
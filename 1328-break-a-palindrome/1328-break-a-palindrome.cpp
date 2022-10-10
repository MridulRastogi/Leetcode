class Solution 
{
    public:
    string breakPalindrome(string s) 
    {
        if(s.length()==1)
            return "";
        else
        {
            int len=s.length();
            for(int i=0; i<len; i++)
            {
                if(i==(len/2) and len%2==1)
                    continue;
                else if(s[i]!='a')
                {
                    s[i] = 'a';
                    return s;
                }
            }
            s[len-1] = 'b';
            return s;
        }
    }
};
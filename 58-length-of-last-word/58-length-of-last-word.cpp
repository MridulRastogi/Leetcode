class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int pos = s.length();
        if(s[s.length()-1]==' ')
        {
            for(int i=s.length()-1; i>=0; i--)
            {
                if(s[i]!=' ')
                {
                    pos = i;
                    break;
                }
            }
            s = s.substr(0,pos+1);
        }
        int c=0;
        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i]!=' ')
                c++;
            else 
                break;
        }
        return c;
    }
};
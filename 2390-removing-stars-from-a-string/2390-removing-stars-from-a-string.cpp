class Solution 
{
    public:
    string removeStars(string s) 
    {
        int pos=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] != '*')
                s[pos++] = s[i];
            else
                pos--;
        }
        return s.substr(0, pos);
    }
};
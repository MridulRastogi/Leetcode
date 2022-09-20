class Solution 
{
    public:
    int maxRepeating(string s, string word) 
    {
        int l = s.length(), c=0;  
        string p = word;
        while(p.length() <= l)
        {
            if(s.find(p) != string::npos)
                c++;
            else
                break;
            p += word;
        }
        return c;
    }
};

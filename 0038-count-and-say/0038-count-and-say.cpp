class Solution 
{
    public:
    string cas(string s)
    {
        int c=1;
        string str = "";
        for(int i=0; i<s.length()-1; i++)
        {
            if(s[i] == s[i+1])
                c++;
            else
            {
                str = str + to_string(c) + s[i];
                c = 1;
            }
        }
        str = str + to_string(c) + s[s.length()-1];
        return str;
    }
    string countAndSay(int n) 
    {
        string s = "1";
        for(int i=1; i<n; i++)
            s = cas(s);
        return s;
    }
};
class Solution 
{
    public:
    string reverseOnlyLetters(string s) 
    {
        string str="";
        for(char ch:s)
            if((ch>=65 and ch<=90) or (ch>=97 and ch<=122))
                str += ch;
        
        reverse(str.begin(), str.end());
        int c=0;
        
        for(int i=0; i<s.length(); i++)
        {
            char ch = s[i];
            if((ch>=65 and ch<=90) or (ch>=97 and ch<=122))
                s[i] = str[c++];
        }
        return s;
    }
};
class Solution 
{
    public:
    string reverseOnlyLetters(string s) 
    {
        int l=0, r=s.length()-1;
        while(l<r)
        {
            if(isalpha(s[l]) and isalpha(s[r]))
            {
                swap(s[l], s[r]);
                l++;
                r--;
            }
            if(!isalpha(s[l]))
                l++;
            if(!isalpha(s[r]))
                r--;
        }
        return s;
    }
};
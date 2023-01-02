class Solution 
{
    public:
    bool detectCapitalUse(string word) 
    {
        if(word.length()==1)
                return true;
        
        int small=0, large=0;
        for(int i=1; i<word.length(); i++)
        {
            if(word[i]>=97 and word[i]<=122)
                small++;
            else
                large++;
        }
        if((word.length()-1 == small) or (word.length()-1 == large and word[0]>=65 and word[0]<=90))
            return true;
        
        return false;
    }
};
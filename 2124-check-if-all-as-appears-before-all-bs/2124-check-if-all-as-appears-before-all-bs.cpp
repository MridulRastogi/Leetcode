class Solution 
{
    public:
    bool checkString(string s) 
    {
        if(s.length()==1)
            return true;
        int i, l = s.length()-1;
        for(i=0; i<l; i++)   
            if(s.substr(i,2)=="ba")
                return false;
        return true;
    }
};
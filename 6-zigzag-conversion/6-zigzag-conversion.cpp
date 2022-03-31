class Solution {
public:
    string convert(string s, int row) 
    {
        int skip = 2*row-2, i=0, j=0, ctr=0, n=s.length();
        string s2="";
        if(skip==0)
            return s;
        while(ctr<n)
        {   
            s2 += s[i];
            ctr++;
            i += skip;
            if(j>0 and j<row-1 and i-2*j<n)
            {
                s2 += s[i-2*j];
                ctr++;
            }
            if(i>=n)
            {
                j++;
                i=j;
            }
        }
        return s2;
    }
};
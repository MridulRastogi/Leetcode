#define vec vector<vector<int>>&
class Solution 
{
    public:  
    bool check(int a, int b, int len)
    {
        return ((a+b)>=0 and (a+b)<len);
    }
    int largestOverlap(vec img1, vec img2) 
    {
        int len = img1.size(), counter, result = 0;
        for(int i=-len; i<len; i++)
        {
            for(int j=-len; j<len; j++)
            {
                counter = 0;
                for(int k=0; k<len; k++)
                {
                    for(int l=0; l<len; l++)
                    {
                        if(check(k,i,len) and check(l,j,len) and img1[k+i][l+j] and img2[k][l])
                        {
                            counter++;
                        }
                    }
                }
                result = max(result, counter);
            }
        }
        return result;
    }
};

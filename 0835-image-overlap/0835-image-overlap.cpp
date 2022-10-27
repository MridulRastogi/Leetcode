#define vec vector<vector<int>>&
class Solution 
{
    public:    
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
                        if( ((k+i>=0 and k+i<len) and (l+j>=0 and l+j<len)) and (img1[k+i][l+j]==1 and img2[k][l]==1) )
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

#define vec vector<vector<int>>
class Solution 
{
    public:
    
    int operate(vec& img1, vec& img2, int x, int y)
    {
        int n = img1.size(), counter = 0;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if( ((i+x>=0 and i+x<n) and (j+y>=0 and j+y<n)) and (img1[i+x][j+y]==1 and img2[i][j]==1) )
                    counter++;
        return counter;
    }
    
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) 
    {
        int len = img1.size(), result = 0;
        for(int i=-len; i<len; i++)
            for(int j=-len; j<len; j++)
                result = max(result, operate(img1, img2, i, j));
        return result;
    }
};

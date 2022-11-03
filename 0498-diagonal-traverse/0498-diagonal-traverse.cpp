class Solution 
{
    public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) 
    {
        int m = mat.size();
        int n = mat[0].size();
        int s = m+n-1, d, row=0;
        vector<vector<int>> vec(s);
        vector<int> result;        
        
        for(int i=0; i<m; i++)
        {
            d = row;
            for(int j=0; j<n; j++)
            {
                vec[d].push_back(mat[i][j]);
                d++;
            }
            row++;
        }
        
        for(int i=0; i<vec.size(); i++)
        {
            if(i%2==0)
                copy(vec[i].rbegin(), vec[i].rend(), back_inserter(result));
            else                
                copy(vec[i].begin(), vec[i].end(), back_inserter(result));
        }
        
        return result;
    }
};
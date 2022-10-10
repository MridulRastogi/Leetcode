class Solution 
{
    public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        int r = matrix.size(), c = matrix[0].size(), j = 0;
        vector<vector<int>> vec(c, vector<int>(r));
        for(vector<int>& log:matrix)
        {
            for(int i=0; i<c; i++)
                vec[i][j] = log[i];
            j++;
        }
        return vec;
    }
};
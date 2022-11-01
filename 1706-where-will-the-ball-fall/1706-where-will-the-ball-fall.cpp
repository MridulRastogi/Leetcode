class Solution 
{
    public:
    int m, n;
    int compute(vector<vector<int>>& grid, int row, int col)
    {
        if(row == m)
            return col;
        int new_col = col + grid[row][col];
        if(new_col==n or new_col==-1 or grid[row][new_col]!=grid[row][col])
            return -1;
        else
            return compute(grid, row+1, new_col);
    }
    vector<int> findBall(vector<vector<int>>& grid) 
    {
        vector<int> result;
        m = grid.size();
        n = grid[0].size();
        for(int i=0; i<n; i++)    
            result.push_back(compute(grid, 0, i));
        return result;
    }
};
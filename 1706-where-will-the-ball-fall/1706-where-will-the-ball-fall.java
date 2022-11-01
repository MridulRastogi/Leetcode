class Solution 
{
    int m, n;
    int compute(int[][] grid, int row, int col)
    {
        if(row == m)
            return col;
        int new_col = col + grid[row][col];
        if(new_col==n || new_col==-1 || grid[row][new_col]!=grid[row][col])
            return -1;
        else
            return compute(grid, row+1, new_col);
    }
    public int[] findBall(int[][] grid) 
    { 
        m = grid.length;
        n = grid[0].length;
        int result[] = new int[n];
        for(int i=0; i<n; i++)    
            result[i] = compute(grid, 0, i);
        return result;        
    }
}

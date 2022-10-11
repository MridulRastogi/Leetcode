class Solution 
{
    public:
    bool check(vector<vector<int>>& grid, int row, int col, int s, int sum, int checker, bool flag, bool columnSum)
    {
        for(int i=1, checker=0; i<s and flag; i++)                 // checking if all rows or columns have equal sum
        {
            checker = 0;
            for(int j=0; j<s; j++)
                checker += (columnSum ? grid[row+j][col+i] : grid[row+i][col+j]);   // checking if row or column sum is to be calculated 
            flag = sum==checker;
        }
        return flag;
    }
    
    int largestMagicSquare(vector<vector<int>>& grid)
    {
        int m=grid.size(), n=grid[0].size();
        
        for(int s=min(m,n); s>=0; s--)
        {
            for(int row=0; row<=m-s; row++)
            {
                for(int col=0; col<=n-s; col++)
                {
                    int rs=0, cs=0, pd=0, sd=0, checker;
                    bool flag = true;

                    for(int i=0; i<s; i++)  
                    {
                        rs += grid[row][col+i] ;            // row sum
                        cs += grid[row+i][col];             // column sum
                        pd += grid[row+i][col+i];           // principal diagonal sum
                        sd += grid[row+i][col+(s-1)-i];     // secondary diagonal sum
                    }
                    
                    if(rs!=cs or cs!=pd or pd!=sd)                            // checking base case
                        continue;
                    flag = check(grid, row, col, s, rs, 0, true, false);
                    if(!flag)                                                   // if not then skipping to next iteration
                        continue;
                    flag = check(grid, row, col, s, cs, 0, true, true);
                    if(!flag)                                                   // if not then skipping to next iteration
                        continue;
                    else 
                        return s;            // if all cases are passed then the result is the current size of the matrix
                }
            }
        }
        return 1;
    }
};
class Solution 
{
    public:
    int shortestPath(vector<vector<int>>& grid, int k) 
    {
        int m = grid.size()-1;
        int n = grid[0].size()-1;
        
        vector<vector<int>> vis(m+1, vector<int>(n+1, -1));
        queue<vector<int>> q;
        q.push({0,0,0,k});

        while(q.empty() == false)
        {
            auto t = q.front();
            int x = t[0], y = t[1];
            q.pop();

            if(x<0 || y<0 || x>m || y>n)    // out of bounds exception
                continue;

            if(x==m && y==n)                // size of matrix equivalent to [1][1]
                return t[2];

            if(grid[x][y]==1)               // if cell has an obstacle
            {
                if(t[3]>0)                      // if k remains greater than 0
                    t[3]--;                         // k gets decremented
                else
                    continue;                  // otherwise this iteration of while loop is skipped
            }

            if(vis[x][y]!=-1 && vis[x][y]>=t[3])    
                continue;

            vis[x][y] = t[3];
            q.push({ x+1, y  , t[2]+1, t[3] });
            q.push({ x  , y+1, t[2]+1, t[3] });
            q.push({ x-1, y  , t[2]+1, t[3] });
            q.push({ x  , y-1, t[2]+1, t[3] });

        }
        return -1;
    }
};
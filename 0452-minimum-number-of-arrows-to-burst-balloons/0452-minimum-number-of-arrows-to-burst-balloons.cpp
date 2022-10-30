class Solution 
{
    public:
    static bool compare(vector<int>& x, vector<int>& y)
    {
        return x[1] < y[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        sort(points.begin(), points.end(), compare);
        int minx = points[0][1], result=1, x, y;
        for(int i=0; i<points.size(); i++)
        {
            x = points[i][0];
            y = points[i][1];
            if(minx < x)
            {
                result++;
                minx = y;
            }
        }
        return result;
    }
};

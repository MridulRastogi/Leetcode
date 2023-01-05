class Solution 
{
    public:
    static bool compare(vector<int>& x, vector<int>& y)
    {   return x[1] < y[1];  }
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        sort(points.begin(), points.end(), compare);
        int minx = points[0][1], result=1;
        for(int i=0; i<points.size(); i++)
            if(minx < points[i][0])
            {
                result++;
                minx = points[i][1];
            }
        return result;
    }
};
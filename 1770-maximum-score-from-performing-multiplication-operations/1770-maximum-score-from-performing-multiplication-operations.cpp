class Solution 
{
    public:
    vector<vector<int>> vec;
    int calculate(vector<int>& nums, vector<int>&multipliers, int i, int j, int n, int m)
    {
        if(j==m)
            return 0;
        if(vec[i][j] != INT_MIN)
            return vec[i][j];
        int fromLeft  = nums[i]*multipliers[j] + calculate(nums, multipliers, i+1, j+1, n, m);
        int fromRight = nums[n+i-j-1]*multipliers[j] + calculate(nums, multipliers, i, j+1, n, m);
        vec[i][j] = max(fromLeft, fromRight);
        return vec[i][j];        
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) 
    {
        int n = nums.size(), m = multipliers.size();
        vector<vector<int>> v(m+1, vector<int>(m+1, INT_MIN));
        vec = v;
        return calculate(nums, multipliers, 0, 0, n, m);
    }
};
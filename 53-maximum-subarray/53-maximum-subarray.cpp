class Solution 
{
    public:
    int maxSubArray(vector<int>& nums) 
    {
        int lmax=0, gmax=INT_MIN;
        for(int i : nums)
        {
            lmax = max(i, i+lmax);
            gmax = max(lmax, gmax);
        }
        return gmax;
    }
};
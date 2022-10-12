class Solution 
{
    public:
    int largestPerimeter(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int l = nums.size();
        for(int i=l-1; i>1; i--)
        {
            if(nums[i-1]+nums[i-2] > nums[i])
                return nums[i]+nums[i-1]+nums[i-2];
        }
        return 0;
    }
};

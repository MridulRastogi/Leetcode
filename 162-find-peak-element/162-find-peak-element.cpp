class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        if(nums.size()==1) 
            return 0;
        int n = nums.size();
        int pos = (nums[0]>nums[1] ? 0 : (nums[n-1]>nums[n-2] ? n-1 : 0));
        if(nums[0]>nums[1])
            pos = 0;
        for(int i=1; i<n-1; i++)
            if(nums[i]>nums[i-1] and nums[i]>nums[i+1])
                return i;
        return pos;
    }
};
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) 
    {
        int low = 0, high = nums.size()-1, mid = low + (high-low)/2;
        while(true)
        {
            if(nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1])
                return mid;
            else if(nums[mid]>nums[mid-1] and nums[mid]<nums[mid+1])
                mid++;
            else if(nums[mid]<nums[mid-1] and nums[mid]>nums[mid+1])
                mid--;
        }
        return mid;
    }
};
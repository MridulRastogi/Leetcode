class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        if(nums.size()==1) 
            return 0;
        int n = nums.size();
        int l=1, r=n-2;
        int pos = (nums[0]>nums[1] ? 0 : (nums[n-1]>nums[n-2] ? n-1 : -1));
        while(l<=r)
        {
            if(nums[l]>nums[l-1] and nums[l]>nums[l+1])
                return l;
            if(nums[r]>nums[r-1] and nums[r]>nums[r+1])
                return r;
            l++;
            r--;
        }
        return (pos==-1 ? 0 : pos);
    }
};
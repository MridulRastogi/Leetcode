class Solution {
    public boolean search(int[] nums, int target) 
    {
        for(int i=0; i<nums.length; i++)
            if(nums[i] == target)
                return true;
        return false;
        /*
        int l=0, r = nums.length-1;
        int mid;
        while(l<=r)
        {
            mid = l + ((r-l)/ 2);
            if(nums[mid]==target)
                return true;
            if(nums[mid] > target)
                r = mid-1;
            else if(nums[mid] < target)
                l = mid+1;
        }
        return false;
        */
    }
}
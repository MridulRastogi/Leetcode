class Solution 
{
    int binary_search(int[] nums, int l, int r, int val)
    {
        int mid;
        while(l<=r)
        {
            mid = (r+l)/2;
            if(nums[mid] == val)
                return mid;
            if(nums[mid] > val)
                r = mid-1;
            else
                l = mid+1;
        }
        return -1;
    }
    public int[] twoSum(int[] nums, int target) 
    {
        int vec[] = new int[2];
        int l=0, r=nums.length-1, res;
        while(l<=r)
        {
            res = binary_search(nums, l+1, r, target-nums[l]);
            if(res != -1)
            {
                vec[0] = (l+1);
                vec[1] = (res+1);
                return vec;
            }
            l++;
        }
        return vec; 
    }
}
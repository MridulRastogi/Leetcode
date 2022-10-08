class Solution 
{
    public int threeSumClosest(int[] nums, int target) 
    {
        Arrays.sort(nums);
        
        int left, right, sum, diff, MIN=Integer.MAX_VALUE, result=0, len=nums.length;
        
        for(int i=0; i<len-2; i++)
        {
            left  = i+1; 
            right = len-1;
            while(left < right)
            {
                sum = nums[i]+nums[left]+nums[right];
                diff = Math.abs(target-sum);
                if(diff < MIN)
                {
                    MIN = diff;
                    result  = sum;
                }
                if(target == sum)
                    return sum;
                else if(target > sum)
                    left++;
                else
                    right--;
            }
        }
        return result;
    }
}
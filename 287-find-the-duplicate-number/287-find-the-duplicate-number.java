class Solution 
{
    public int findDuplicate(int[] nums) 
    {
        HashMap<Integer, Integer> hp = new HashMap<Integer, Integer>();
        for(int i=0; i<nums.length; i++)
        {
            if(hp.containsKey(nums[i]))
                return nums[i];
            else    
                hp.putIfAbsent(nums[i], 1);
        }
        return 0;
    }
}
class Solution 
{
    public void sortColors(int[] nums) 
    {
        int i, j, temp;
        for(i=1; i<nums.length; i++)
        {
            temp = nums[i];
            j = i-1;
            while(j>=0 && nums[j]>temp)
            {
                nums[j+1] = nums[j];
                j = j-1;
            }
            nums[j+1] = temp;
        }    
    }
}
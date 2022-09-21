class Solution 
{
    public int sum(int []nums)
    {
        int s = 0;
        for(int i=0; i<nums.length; i++)
            if((nums[i]&1) == 0)
                s += nums[i];
        return s;
    }
    public int[] sumEvenAfterQueries(int[] nums, int[][] queries) 
    {
        int len = nums.length;
        int vec[] = new int[len];
        int recent, current, value, res = sum(nums);
        
        for(int i=0; i<queries.length; i++)
        {
            value                = queries[i][0];
            recent               = nums[queries[i][1]];
            nums[queries[i][1]] += value;
            current              = nums[queries[i][1]];

            if((recent&1)==0)
            {
                if((current&1) == 0)
                {
                    if(recent > current)
                        res -= Math.abs(value);
                    else if(recent < current)
                        res += Math.abs(value);
                }
                else if((Math.abs(current)&1)==1)
                    res -= recent;
            }
            else if( (Math.abs(recent)&1)==1 && (Math.abs(current)&1)==0 )
                res = res + current;
            vec[i] = res;    
        }
        return vec;
    }
}
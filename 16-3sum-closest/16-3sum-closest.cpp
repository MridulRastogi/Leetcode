class Solution 
{
    public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        sort(nums.begin(), nums.end());
        
        int left, right, sum, diff, MIN=INT_MAX, result, len=nums.size();
        
        for(int i=0; i<len-2; i++)
        {
            left  = i+1; 
            right = len-1;
            while(left < right)
            {
                sum = nums[i]+nums[left]+nums[right];
                diff = abs(target-sum);
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
};
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) 
    {
        if(nums.size()==1)
            return nums[0];
        
        vector<int> prefix_sum(nums.size(), 0);
        prefix_sum[0] = nums[0];
        
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] > nums[i-1])
                prefix_sum[i] = prefix_sum[i-1] + nums[i];
            else
                prefix_sum[i] = nums[i];
        }
        int result = *max_element(prefix_sum.begin(), prefix_sum.end());
        return result;
    }
};

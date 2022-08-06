class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        auto it = std::find(nums.begin(), nums.end(), 1);
        if(it==nums.end())
            return 1;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]>0)
                if(nums[i]+1 != nums[i+1] and nums[i+1]!=nums[i])
                    return nums[i]+1;
        }        
        return nums[nums.size()-1]+1;
    }
};
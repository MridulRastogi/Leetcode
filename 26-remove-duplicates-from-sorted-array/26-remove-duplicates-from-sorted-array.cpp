class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        vector<int> vec;
        int end = nums.size()-1;
        for(int i=0; i<nums.size()-1; i++)
            if(nums[i]!=nums[i+1])
                vec.push_back(nums[i]);
        vec.push_back(nums[nums.size()-1]);
        nums = vec;
        return nums.size();
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int start=0;
        for(int i=0; i<nums.size()-1; i++)
            if(nums[i]!=nums[i+1])
                swap(nums[start++], nums[i]);
        swap(nums[start], nums[nums.size()-1]);
        return ++start;
    }
};
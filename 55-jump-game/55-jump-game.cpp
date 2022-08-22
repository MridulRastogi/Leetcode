class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        if(nums.size()==1)
            return true;
        int gp = nums.size()-1;
        bool reached = true;
        for(int i=nums.size()-1; i>=0; i--)
        {
            if(i+nums[i] >= gp)
            {
                gp = i;
                reached = true;
            }
            else
                reached = false;
        }
        return reached;
    }
};
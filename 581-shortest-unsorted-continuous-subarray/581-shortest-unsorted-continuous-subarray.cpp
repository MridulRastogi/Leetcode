class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        if(nums.size()<=1)
            return 0;
        else
        {
            vector<int> copy = nums;
            int c, start, end;
            sort(copy.begin(), copy.end());
            for(int i=0; i<nums.size(); i++)
            {
                if(nums[i]!=copy[i])
                {
                    start = i;
                    break;
                }
            }
            for(int i=nums.size()-1; i>=start; i--)
            {
                if(nums[i]!=copy[i])
                {
                    end = i;
                    break;
                }
            }
            c = end==start ? 1 : end-start+1 ;
            return c;
        }
    }
};
class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        if(find(nums.begin(), nums.end(), 0) != nums.end())
            return 0;
        int c=0;
        for(int i:nums)
            if(i<0)
                c++;
        return ((c&1)==0 ? 1 : -1);
    }
};
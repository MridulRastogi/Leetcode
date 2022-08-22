class Solution {
public:
    int jump(vector<int>& nums)
    {
        int l=0, r=0, res=0, farthest;
        while(r < nums.size()-1)
        {
            farthest = 0;
            for(int i=l; i<=r; i++)
                farthest = max(farthest, nums[i]+i);
            l = r+1;
            r = farthest;
            res++;
        }
        return res;        
    }
};
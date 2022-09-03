class Solution 
{
    public:
    vector<int> numsSameConsecDiff(int n, int k)
    {
        vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        for (int i=2;  i<=n; i++)
        {
            vector<int> result;
            for (int i=0; i<nums.size(); i++)
            {
                int y = nums[i] % 10;
                if (y+k < 10)
                    result.push_back(nums[i] * 10 + y + k);
                if (k>0 and (y-k)>=0)
                    result.push_back(nums[i] * 10 + y - k);
            }
            nums = result;
        }
        return nums;
    }
};
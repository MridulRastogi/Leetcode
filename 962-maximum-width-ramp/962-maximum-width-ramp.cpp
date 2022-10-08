class Solution 
{
    public:
    int getPos(vector<pair<int, int>>& vec, int num)
    {
        for(int i=0; i<vec.size(); i++)
            if(vec[i].first <= num)
                return vec[i].second;
        return 0;
    }
    int maxWidthRamp(vector<int>& nums) 
    {
        vector<pair<int, int>> vec;
        int result = 0, pos;
        for(int i=0; i<nums.size(); i++)
        {
            if(vec.empty() or vec.back().first > nums[i])
                vec.push_back(make_pair(nums[i], i));
            else
            {
                //pos = getPos(vec, nums[i]);
                                pos = lower_bound(vec.begin(), vec.end(), make_pair(nums[i],INT_MAX), greater<pair<int, int>>())->second;

                result = max(result, i-pos);
            }
        }
        return result;
    }
};
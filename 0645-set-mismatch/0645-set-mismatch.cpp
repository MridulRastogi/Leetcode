class Solution 
{
    public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        unordered_map<int, int> mp;
        vector<int> result;
        
        for(int i:nums)
        {
            mp[i]++;
            if(mp[i]>1)
                result.push_back(i);
        }
        
        for(int i=1; i<=nums.size(); i++)
        {
            if(mp.find(i) == mp.end())
            {
                result.push_back(i);
                break;
            }
        }
        
        return result;
    }
};
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        int l = nums.size();
        unordered_map<int, vector<int>> mp;
        for(int i=0; i<l; i++)
            mp[nums[i]].push_back(i);
    
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second.size()==1)
                continue;
            for(int i=1; i<it->second.size(); i++)
                if((it->second[i] - it->second[i-1]) <= k)
                    return true;
        }
        
        return false;
    }
};
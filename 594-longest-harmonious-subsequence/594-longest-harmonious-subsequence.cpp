class Solution 
{
    public:
    int findLHS(vector<int>& nums) 
    {        
        map<int, int> m;
        for(int i:nums)
            m[i]++;
        
        if((m.end()->first - m.begin()->first) == 0)
            return 0;
        
        int maxi = 0;
        auto it = m.begin();
        int number = it->first, value = it->second;
        for(auto [key, val] : m)
        {
            if(key-number==1)
                maxi = max(maxi, value+val);
            number = key;
            value  = val;
        }
        
        return maxi;
    }
};
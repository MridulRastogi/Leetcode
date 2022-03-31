class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int res=nums[0];
        map<int,int> m;
        for(int x:nums)
        {
            if(m.find(x) == m.end())
                m[x] = 1;
            else
                m[x]++;
        }
        for(auto i:m)
        {
            if(i.second==1)
                return i.first;
        }
        return 0;
    }
};
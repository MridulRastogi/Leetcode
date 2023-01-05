class Solution 
{
    public:
    int minimumRounds(vector<int>& tasks) 
    {
        map<int, int> mp;
        int res=0;
        
        for(int i:tasks)
            mp[i]++;
        
        for(auto it:mp)
        {
            if(it.second==1)
                return -1;
            if(it.second%3==0)
                res += it.second/3;
            else
                res += (it.second/3) + 1;
        }
        return res;
    }
};
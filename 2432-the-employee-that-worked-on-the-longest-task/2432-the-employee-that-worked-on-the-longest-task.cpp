class Solution 
{
    public:
    int hardestWorker(int n, vector<vector<int>>& logs) 
    {
        map<int, int> mp;
        int maxi = 0, eid;
        
        mp[logs[0][0]] = logs[0][1];
        for(int i=1; i<logs.size(); i++)
            mp[logs[i][0]] = max( mp[logs[i][0]] , logs[i][1]-logs[i-1][1] );
        
        for(auto it : mp)
        {
            if(maxi < it.second)
            {
                maxi = it.second;
                eid  = it.first;
            }
        }
        return eid;
    }
};
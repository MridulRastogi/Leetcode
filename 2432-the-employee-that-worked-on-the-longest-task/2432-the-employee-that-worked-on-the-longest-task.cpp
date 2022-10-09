class Solution 
{
    public:
    int hardestWorker(int n, vector<vector<int>>& logs) 
    {
        vector<pair<int, int>> vec;
        int maxi = 0, eid;

        vec.push_back(make_pair(logs[0][0], logs[0][1]));
        for(int i=1; i<logs.size(); i++)
            vec.push_back(make_pair(logs[i][0], logs[i][1]-logs[i-1][1]));
        sort(vec.begin(), vec.end());
        
        for(int i=0; i<vec.size(); i++)
            if(maxi < vec[i].second)
            {
                maxi = vec[i].second;
                eid  = vec[i].first;
            }
        return eid;
    }
};
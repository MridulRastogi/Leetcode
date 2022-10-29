class Solution 
{
    public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) 
    {
        vector<pair<int, int>> vec;
        int n = plantTime.size(), totalPlantationDays=0, result=0;
  
        for(int i=0; i<n; i++)
            vec.push_back(make_pair(growTime[i], plantTime[i]));
        sort(vec.rbegin(), vec.rend());
        
        for(int i=0; i<n; i++)
        {
            totalPlantationDays += vec[i].second;
            result = max(result, totalPlantationDays + vec[i].first);
        }
        return result;
    }
};
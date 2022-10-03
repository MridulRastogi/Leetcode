class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int, int> m;
        vector<pair<int, int>> vec;
        vector<int> v;
        
        for(int i:nums)
            m[i]++;
        for(auto it:m)
            vec.push_back(make_pair(it.second, it.first));
        
        sort(vec.rbegin(), vec.rend());
        for(int i=0; i<k; i++)
            v.push_back(vec[i].second);
        
        return v;
    }
};
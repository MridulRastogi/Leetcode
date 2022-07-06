class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int truckSize) 
    {
        int s=0, boxes=0, capacity;
        vector<pair<int,int>> vec;
        for(int i=0; i<box.size(); i++)
            vec.push_back(make_pair(box[i][1], box[i][0]));
        // vec[i].first  = number of units per box
        // vec[i].second = number of boxes 
        sort(vec.begin(), vec.end());
        for(int i=vec.size()-1; i>=0; i--)
        {
            if((boxes+vec[i].second) <= truckSize)
            {
                s += (vec[i].second*vec[i].first);
                boxes += vec[i].second;
            }
            else 
            {
                capacity = truckSize-boxes;
                s += (min(capacity,vec[i].second)*vec[i].first);
                boxes += min(capacity, vec[i].second);
            }
        }
        return s;
    }
};

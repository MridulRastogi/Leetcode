class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {        
        vector<int> res1, res2, sorted = arr;
        map<int, int> m;
        int c=1;
        
        sort(sorted.begin(), sorted.end());
        
        for(int i=0; i<sorted.size(); i++)
            if(m.find(sorted[i]) == m.end())
            {
                m[sorted[i]] = c;
                c++;
            }

        for(int i=0; i<arr.size(); i++)
            res2.push_back(m[arr[i]]);
        
        return res2;
    }
};
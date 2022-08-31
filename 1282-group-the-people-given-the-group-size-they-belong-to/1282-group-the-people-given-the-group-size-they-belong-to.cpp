class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) 
    {
        vector<vector<int>> res;
        map<int, vector<int>> m;
        int c=0;

        for(int i=0; i<groupSizes.size(); i++)
            m[groupSizes[i]].push_back(i);

        for(auto const &it : m)
        {
            vector<int> v;
            for(auto const &itr : it.second)
            {
                v.push_back(itr);
                c++;
                if(c==it.first)
                {
                    res.push_back(v);
                    v.clear();
                    c=0;
                }
            }

            if(v.size()>0)
                res.push_back(v);
        }
        return res;
    }
};
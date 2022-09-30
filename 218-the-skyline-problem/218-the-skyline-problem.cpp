class Solution 
{
    public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) 
    {
        priority_queue<vector<int>> pq;
        map<int , vector<pair<int,int>>> m;
        vector<vector<int>> ans;
        vector<vector<int>> vec;

        int count =0, width = 0;

        for(auto i : buildings)
        {
            m[i[0]].push_back({i[2],i[1]});     // pushing the RW's position and BH at the LW's position
            m[i[1]].push_back({0,0});           // pushing 0,0 at the RW's position
        }

        for(auto i : m)                     // iterating through the map
        {
            auto vec = i.second;                    // obtaining all the pairs from the vector of pairs
            for(auto j : vec)
                if(j.first!=0)                      // storing all the non-zero pairs in the vector in a priority queue
                    pq.push({j.first, j.second});      

            if(i.first == width)                    // if the first wall is not equivalent to width
                count = 0;

            while(pq.empty() == false  and  pq.top()[1] <= i.first)     
            {
                pq.pop();       // popping out all the pairs whose second height is less than LW's height
            }
            if(pq.empty() == false  and  pq.top()[0] > count)
            {
                count = pq.top()[0];
                width = pq.top()[1];
                ans.push_back({i.first , count});
            }
            else if(count == 0)
                ans.push_back({i.first , 0});
        }

        int prev = -1;
        for(auto i : ans)
            if(i[1]!=prev)
            {
                vec.push_back(i);
                prev = i[1];
            }
        return vec;     
    }
};
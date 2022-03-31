class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        map<int,int> m;
        for(int x:nums)
        {
            if(m.find(x)==m.end())
                m[x]=1;
            else
                m[x]++;
        }
        int rep;
        for(auto i:m)
        {
            if(i.second > 1)
            {
                rep = i.first;
                break;
            }
        }
        return rep;
    }
};
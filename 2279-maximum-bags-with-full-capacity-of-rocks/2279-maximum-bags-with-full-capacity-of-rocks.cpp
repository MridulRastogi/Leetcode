class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) 
    {
        int c=0;
        vector<int> vec;
        for(int i=0; i<rocks.size(); i++)
            vec.push_back(capacity[i]-rocks[i]);
        sort(vec.begin(), vec.end());
        for(int i=0; i<vec.size() and additionalRocks!=0; i++)
        {
            if(vec[i]==0)
                c++;
            else if(vec[i]!=0 and additionalRocks>=vec[i])
            {
                additionalRocks -= vec[i];
                c++;
            }
        }
        return c;
    }
};
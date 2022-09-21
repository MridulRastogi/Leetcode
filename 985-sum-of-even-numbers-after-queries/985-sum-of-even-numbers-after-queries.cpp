class Solution 
{
    public:
    
    int sum(vector<int>& vec)
    {
        int s = 0;
        for(int i:vec)
            if(!(i&1))
                s+=i;
        return s;
    }
    
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries)
    {
        vector<int> vec;
        int recent, current, value, res = sum(nums);
        
        for(int i=0; i<queries.size(); i++)
        {
            value                = queries[i][0];
            recent               = nums[queries[i][1]];
            nums[queries[i][1]] += value;
            current              = nums[queries[i][1]];

            if(!(recent&1))
            {
                if(!(current&1))
                {
                    if(recent > current)
                        res -= abs(value);
                    else if(recent < current)
                        res += abs(value);
                }
                else if(abs(current)&1)
                    res -= recent;
            }
            else if(abs(recent)&1 and !(abs(current)&1))
                res = res + current;
            vec.push_back(res);
        }
        return vec;
    }
};
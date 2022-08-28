class Solution 
{
    public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        sort(nums.begin(), nums.end());
        vector<int> prefix_sum, result(queries.size(), 0);
        int sum = 0;

        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
            prefix_sum.push_back(sum);
        }
        
        for(int i=0; i<queries.size(); i++)
            for(int j=prefix_sum.size()-1; j>=0; j--)
                if(prefix_sum[j] <= queries[i])    
                {
                    result[i] = j+1;
                    break;
                }
        return result;
    }
};
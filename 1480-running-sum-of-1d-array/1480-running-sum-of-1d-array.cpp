class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int s=0;
        vector<int> vec;
        for(int i:nums)
        {
            s += i;
            vec.push_back(s);
        }
        return vec;
    }
};
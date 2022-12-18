class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        bool flag = false;
        vector<int> indicies;
        int i,j,l;
        l = nums.size();
        for(i=0; i<l; i++)
        {
            for(j=0; j<l; j++)
            {
                if(i!=j && (nums[i]+nums[j])==target && flag==false)
                {
                    indicies.push_back(i);
                    indicies.push_back(j);
                    flag = true;
                    break;
                }
            }   
        }
        return indicies;   
    }
};
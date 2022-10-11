class Solution 
{
    public:
    int countQuadruplets(vector<int>& nums) 
    {
        int c=0;
        for(int i=0; i<nums.size(); i++)
            for(int j=i; j<nums.size(); j++)
                for(int k=j; k<nums.size(); k++)
                    for(int d=k; d<nums.size(); d++)
                        if(i<j and j<k and k<d)
                            if((nums[i] + nums[j] + nums[k]) == nums[d])
                                c++;                        
        return c;
    }
};
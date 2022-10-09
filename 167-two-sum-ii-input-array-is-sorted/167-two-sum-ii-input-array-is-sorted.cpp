class Solution 
{
    public:
    int binary_search(vector<int>& nums, int l, int r, int val)
    {
        int mid;
        while(l<=r)
        {
            mid = l+((r-l)/2);
            if(nums[mid] == val)
                return mid;
            if(nums[mid] > val)
                r = mid-1;
            else
                l = mid+1;
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> vec;
        int l=0, r=nums.size()-1, res;
        while(l<=r)
        {
            res = binary_search(nums, l+1, r, target-nums[l]);
            if(res != -1)
            {
                vec.push_back(l+1);
                vec.push_back(res+1);
                return vec;
            }
            l++;
        }
        return vec;
    }
};
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> vec, res;
        if(nums.size()==0)
        {
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        int l=0, r=nums.size(), mid = l + ((r-l)/2);
        l = mid;
        r = mid;
        while(l>-1 or r<nums.size())
        {
            if(l>=0)
            {
                if(nums[l] == target)
                    vec.push_back(l);
            }
            l--;
            
            if(r<nums.size())
            {
                if(nums[r] == target)
                    vec.push_back(r);
            }
            r++;
        }
        if(vec.size()>0)
        {
            sort(vec.begin(), vec.end());
            res.push_back(vec[0]);
            res.push_back(vec[vec.size()-1]);
        }
        else
        {
            res.push_back(-1);
            res.push_back(-1);
        }
        return res;
    }
};
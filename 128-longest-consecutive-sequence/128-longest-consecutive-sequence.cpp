class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size()==0 || nums.size()==1)
            return nums.size();
            
        set<int> s;
        for(int i:nums)
            s.insert(i);
        
        int num = *(s.begin()), maxi=1, c=1;
        for(auto it:s)
        {
            if(it == (num+1))
                c++;
            else
            {
                maxi = max(maxi, c);
                c = 1;
            }
            num = it;
        }
        return max(maxi, c);
    }
};
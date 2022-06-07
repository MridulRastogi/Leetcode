class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int> nums3;
        int pos;
        copy(nums1.begin(), nums1.begin()+m, back_inserter(nums3));
        for(int i=0; i<nums2.size(); i++)
            nums3.push_back(nums2[i]);
        sort(nums3.begin(), nums3.end());
        nums1.clear();
        copy(nums3.begin()+pos, nums3.end(), back_inserter(nums1));
    }
};
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int i, c;
        int s = nums1.size() + nums2.size();
        double ar[s];
        for(i=0; i<nums1.size(); i++)
            ar[i] = nums1[i];
        c=i;
        for(i=0; i<nums2.size(); i++)
            ar[c++] = nums2[i];
        sort(ar, ar+s);
        if(s%2==1)
            return ar[s/2];
        else
            return ((ar[s/2]+ar[(s/2)-1])/2);
    }
};
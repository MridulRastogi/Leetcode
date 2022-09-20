class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) 
    {
        int one = nums1.size(), two = nums2.size(), result=0;
        vector<vector<int>> vec(one, vector<int>(two, 0));
        
        for(int i=0; i<one; i++)
            for(int j=0; j<two; j++)
            {
                if(nums1[i] == nums2[j])
                {
                    vec[i][j]++;
                    if(i-1>=0 and j-1>=0)
                        vec[i][j] = vec[i-1][j-1] + vec[i][j];
                }
                result = max(result, vec[i][j]);
            }
        return result;
    }
};


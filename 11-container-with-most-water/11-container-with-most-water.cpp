class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1, maxi = INT_MIN;
        while(i<j)
        {
            int vol = min(height[i],height[j]) * (j-i);
            maxi = max(vol, maxi);
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return maxi;
    }
};
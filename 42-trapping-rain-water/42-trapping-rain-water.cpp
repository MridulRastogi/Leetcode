class Solution {
public:
    int trap(vector<int>& height) 
    {
        vector<int> rightMax;
        int cost=0, leftMax=height[0], rm=INT_MIN;
        for(int i=height.size()-1; i>=0; i--)
        {
            rm = max(height[i], rm);
            rightMax.push_back(rm);
        }
        reverse(rightMax.begin(), rightMax.end());
        for(int i=1; i<height.size()-1; i++)
        {
            leftMax = max(leftMax, height[i]);
            cost += min(leftMax, rightMax[i])-height[i];
        }
        return cost;
    }
};

    
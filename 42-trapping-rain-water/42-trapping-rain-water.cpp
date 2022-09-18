class Solution 
{
    public:
    int trap(vector<int>& height)       // 0 1 0 2 1 0 1 3 2 1 2 1
    {
        vector<int> rightMax;
        int cost=0, leftMax=height[0], rm=INT_MIN;
        
        for(int i=height.size()-1; i>=0; i--)       // taking all the maximum heights from the right end of the vector
        {
            rm = max(height[i], rm);                // according to this values obtained through rm will be as 1 2 3
            rightMax.push_back(rm);                 // thus the final state of rm will be {1,2,3}
        }
        
        reverse(rightMax.begin(), rightMax.end());      // reversing the rm vector to obtain {3,2,1} for 
                                        
        for(int i=1; i<height.size()-1; i++)            // considering the elements obtained from leftMax are {1,2,3}
        {
            leftMax = max(leftMax, height[i]);
            cost += min(leftMax, rightMax[i])-height[i];
        }
        
        return cost;
    }
};

    
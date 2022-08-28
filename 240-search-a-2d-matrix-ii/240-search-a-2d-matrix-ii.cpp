class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        bool canBeFound=true;
        for(int i=0; i<matrix.size(); i++)
        {
            if(target>=matrix[i][0] && target<=matrix[i][matrix[i].size()-1])
            {
                int mid, l=0, r=matrix[i].size();
                while(l<=r)
                {
                    mid = l + (r-l)/2;
                    if(matrix[i][mid]==target)
                        return true;
                    else if(matrix[i][mid]>target)
                        r = mid-1;
                    else if(matrix[i][mid]<target)
                        l = mid+1;
                }
            }
        }
        return false;    
    }
};
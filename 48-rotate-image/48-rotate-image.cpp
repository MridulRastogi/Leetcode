class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        vector<vector<int>> vec = matrix;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                matrix[i][j] = vec[j][i];     
        for(int i=0; i<matrix.size(); i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};
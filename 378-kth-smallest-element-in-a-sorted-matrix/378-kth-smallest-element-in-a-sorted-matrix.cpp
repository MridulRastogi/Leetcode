class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        map<int, int> m;
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[i].size(); j++)
            {
                if(m.find(matrix[i][j]) == m.end())
                    m[matrix[i][j]] = 1;
                else
                    m[matrix[i][j]]++;
            }
        }
        int s = 0;
        for(auto a:m)
        {
            if(s + a.second >= k)    
            {
                s += a.second;
                return a.first; 
            }
            else 
                s += a.second;
        }
        return 0;
    }
};
class Solution 
{
    public:
    static bool compare(vector<int>& a, vector<int>& b)
    {   
        if(a[0]!=b[0])
            return a[0]>b[0];
        else
            return a[1]<b[1];
    }
    int numberOfWeakCharacters(vector<vector<int>>& vec) 
    {
        int maximum = INT_MIN, result = 0;
        sort(vec.begin(), vec.end(), compare);
        for(int i=0; i<vec.size(); i++)
        {
            if(maximum > vec[i][1])
                result++;
            else
                maximum = vec[i][1];
        }
        return result;
    }
};
class Solution {
public:
    vector<vector<int>> generate(int n) 
    {
        int c=0, a=1, line, col;
        vector<vector<int>> vec;
        for(line=1; line<=n; line++)
        {
            a=1;
            vector<int> v;
            for(col=1; col<=line; col++)
            {
                v.push_back(a);
                a = a * (line-col)/col;  
            }
            vec.push_back(v);
            c++;
        }
        return vec;
    }
};
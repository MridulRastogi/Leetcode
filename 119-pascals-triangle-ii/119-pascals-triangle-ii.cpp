class Solution {
public:
    vector<int> getRow(int n) 
    {
        long long a=1, line, col;
        vector<int> vec;
        if(n==0)
        {
            vec.push_back(1);
            return vec;
        }
        for(line=1; line<=n+1; line++)
        {
            a=1;
            vector<int> v;
            for(col=1; col<=line; col++)
            {
                v.push_back(a);
                a = a * (line-col)/col;  
            }
            if(line == n+1)
                return v;
        }
        return vec;    
    }
};
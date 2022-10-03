class Solution 
{
    public:
    int minCost(string colors, vector<int>& nt) 
    {
        colors += (colors[colors.size()-1]=='a' ? 'b' : 'a');
        nt.push_back(1);
        int l = nt.size();
        int s = nt[0], maxn = nt[0], res = 0;
        for(int i=1; i<l; i++)
        {
            if(colors[i] == colors[i-1])
            {
                s += nt[i];
                maxn = max(maxn, nt[i]);
            }
            else
            {
                s -= maxn;
                res += s;
                s = nt[i];
                maxn = nt[i];  
            }
        }
        return res;
    }
};

class Solution 
{
    public:
    int minCost(string colors, vector<int>& nt) 
    {
        int s=nt[0], maxn=nt[0], res=0;
        for(int i=1; i<nt.size(); i++)
        {
            if(colors[i] == colors[i-1])
            {
                s += nt[i];
                maxn = max(maxn, nt[i]);
            }
            else
            {
                res += s-maxn;
                s = maxn = nt[i];
            }
        }
        return res+s-maxn;
    }
};

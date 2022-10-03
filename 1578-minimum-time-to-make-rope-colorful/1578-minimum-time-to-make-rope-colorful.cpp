class Solution 
{
    public:
    int minCost(string colors, vector<int>& nt) 
    {
        colors += " ";
        nt.push_back(1);
        int l=nt.size(), s=nt[0], maxn=nt[0], res=0;
        for(int i=1; i<l; i++)
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
        return res;
    }
};

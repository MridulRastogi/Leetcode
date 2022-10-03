class Solution 
{
    public int minCost(String colors, int[] nt) 
    {
        int s=nt[0], maxn=nt[0], res=0;
        for(int i=1; i<nt.length; i++)
        {
            if(colors.charAt(i) == colors.charAt(i-1))
            {
                s += nt[i];
                maxn = Math.max(maxn, nt[i]);
            }
            else
            {
                res += s-maxn;
                s = maxn = nt[i];
            }
        }
        return res+s-maxn;     
    }
}
class Solution {
    public int minCost(String colors, int[] neededTime) 
    {
        colors += " ";
        int nt[] = new int[neededTime.length+1];
        for(int i=0; i<=neededTime.length; i++)
        {
            if(i==neededTime.length)
                nt[i] = 1;
            else
                nt[i] = neededTime[i];
        }
        int l=nt.length, s=nt[0], maxn=nt[0], res=0;
        for(int i=1; i<l; i++)
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
        return res;    
    }
}
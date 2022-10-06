class Solution {
    public long waysToBuyPensPencils(int total, int cost1, int cost2) 
    {
        long s=0, max, min, lim;
        max = Math.max(cost1, cost2);
        min = Math.min(cost1, cost2);
        if(min>total)
            return 1;
        lim = total/max;
        for(long i=0; i<=lim; i++)
            s += ((total-(max*i))/min)+1;
        return s;    
    }
}
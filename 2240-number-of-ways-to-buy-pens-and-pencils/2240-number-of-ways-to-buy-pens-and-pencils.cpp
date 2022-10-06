class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) 
    {
        long long maxi = max(cost1, cost2);
        long long mini = min(cost1, cost2);
        if(mini>total)
            return 1;
        long long s=0, remaining;
        for(long long i=0; i<=(total/maxi); i++)
        {
            remaining = total - (maxi*i);
            s += (remaining/mini)+1;
        }
        return s;
    }
};
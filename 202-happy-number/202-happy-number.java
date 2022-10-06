class Solution {
    public boolean isHappy(int n) 
    {
        int r, s=0;
        while(n>9 || n==7)
        {
            s=0;
            while(n>0)
            {
                r = n%10;
                s += Math.pow(r,2);
                n = n/10;
            }
            n=s;
        }
        return (n==1);
    }
}
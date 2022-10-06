class Solution 
{
    public boolean isHappy(int n) 
    {
        int s=0;
        while(n>9 || n==7)
        {
            s=0;
            while(n>0)
            {
                s+=Math.pow(n%10,2);
                n/=10;
            }
            n=s;
        }
        return (n==1);
    }
}
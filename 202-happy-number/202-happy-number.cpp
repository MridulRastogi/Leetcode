class Solution 
{
    public:
    bool isHappy(int n) 
    {
        int s=0;
        while(n>9 or n==7)
        {
            s=0;
            while(n>0)
            {
                s=s+pow(n%10,2);
                n=n/10; 
            }
            n=s;
        }
        return (n==1);
    }
};

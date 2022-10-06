class Solution {
public:
    int sod(int n)
    {
        int s=0;
        while(n>0)
        {
            s += (n%10);
            n = n/10;
        }
        return s;
    }
    int countEven(int num) 
    {
        int c=0;
        for(int i=1; i<=num; i++)
            if(sod(i)%2==0)
                c++;
        return c;
    }
};
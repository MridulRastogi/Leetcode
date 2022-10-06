class Solution 
{
    public:
    bool isHappy(int n) 
    {
        int num = n, r, s=0;
        while(num>9 or num==7)
        {
            s = 0;
            while(num>0)
            {
                r = num%10;
                s += pow(r,2);
                num /= 10; 
            }
            num = s;
        }
        return (num==1);
    }
};

class Solution {
public:
    int reverse(int n)
    {
        int rev=0, r;
        while(n>0)
        {
            r = n%10;
            rev = rev*10+r;
            n = n/10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) 
    {
        if(num==0)
            return true;
        int num1 = reverse(num);
        int num2 = reverse(num1);
        return num==num2;
    }
};
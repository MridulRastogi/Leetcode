class Solution 
{
    public:
    double myPow(double x, int n) 
    {
        double number = x, power = n;

        if(power == 0 or number == 1)
            return 1;
        else if(abs(number)==1)
        {
            if(abs(power) == power)
                return number;
            else
                return abs(number);
        }
        else 
        {
            if(n==INT_MIN)
                return 0;
            double result = x;
            int value = int(abs(n));
            for(int i=1; i<value; i++)
                result = result*x;
            if(n<0)
                result = 1/result;
            return result;
        }
        return 0;
    }
};
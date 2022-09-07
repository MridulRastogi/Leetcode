class Solution {
public:
    double myPow(double x, int n) 
    {
        double res = 0;
        double num = x;
        int power = n;

        if(power == 0)
            return 1;
        else if(num == 1)
            return 1;
        else 
            res = pow(x, double(n));
        return res;
    }
};
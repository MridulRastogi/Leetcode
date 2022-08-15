class Solution {
public:
    int mySqrt(int x) 
    {
        if(x==0 || x==1) 
            return x;
        else if(x==2)
            return 1;
        for(long long int i=1; i<=x; i++)
        {
            if((i*i) > x)
                return i-1;
            else if(i*i == x)
                return i;
        }
        return 0;
    }
};
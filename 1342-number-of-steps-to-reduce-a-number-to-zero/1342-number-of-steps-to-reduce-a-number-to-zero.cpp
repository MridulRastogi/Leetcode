class Solution {
public:
    int numberOfSteps(int num) 
    {
        int c=0;
        while(num>0)
        {
            if(num%2==0)
                num /= 2;
            else if(num%2==1)
                num -= 1;
            c++;
        }
        return c;
    }
};
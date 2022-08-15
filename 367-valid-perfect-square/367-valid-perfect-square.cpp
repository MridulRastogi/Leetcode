class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        double s = sqrt(num);
        if(int(s)*int(s) == num)
            return true;
        return false;
    }
};
class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        uint32_t r, c=0;
        while(n)
        {
            c += n & 1;
            n>>=1;
        }
        return c;
    }
};
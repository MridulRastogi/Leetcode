class Solution 
{
    public:    
    int concatenatedBinary(int n) 
    {
        long int ans=0, mod=1000000007;
        for(int i=1; i<=n; i++) 
            ans = ((ans<<int(log2(i)+1))%mod+i)%mod;
        return ans;
    }
};
/*
calculating the number of bits in each number from the range 1 to n
then left shifting the bits of the previous answer by exactly the number of bits in the 
current number thus leaving a space for the current number's binary representation to 
fit in the recently emptied space
Ex: n = 3
when i = 1
    number of bits in binary of 1 = 1
    ans = ans << number_of_bits_in_binary_representation(1) = 0<<1 + 1 (current value of i)
    ans = 0+1 = 1       (0 + 1) = 1
when i = 2
    number of bits in binary of 2 = 2
    ans = ans << number_of_bits_in_binary_representation(2) = 1<<2 + 2 (current value of i)
    ans = 4+2 = 6       (100 + 10) = 110
when i = 3
    number of bits in binary of 3 = 2
    ans = ans << number_of_bits_in_binary_representation(1) = 6<<2 + 3 (current value of i)
    ans = 24+3 = 27     (11000 + 11) = 11011
return the answer when i==n i.e. 27
*/
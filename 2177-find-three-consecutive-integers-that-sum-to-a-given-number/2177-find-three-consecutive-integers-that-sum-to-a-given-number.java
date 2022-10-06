class Solution {
    public long[] sumOfThree(long num) 
    {
        long ar[] = new long[3];
        if(num%3==0)
        {
            ar[0] = (num/3)-1;
            ar[1] = ar[0]+1;
            ar[2] = ar[1]+1;
            return ar;
        }
        return new long[0];
    }
}
class Solution 
{
    public:
    int numDecodings(string s) 
    {
        if(s[0]=='0')
            return 0;
        
        int num, l = s.length();
        vector<int> dp(l+1, 0), vec;
	    for(char ch:s)  
            vec.push_back(ch-'0');
        dp[l] = 1;
        
        for(int i=l-1; i>=0; i--)
        {
            num = vec[i];                           
            if(num > 0)                                 
            {
                dp[i] = dp[i+1];                    
                num   = (      i != l-1      ? (10*vec[i])+vec[i+1] : num  );
                dp[i] = (num>=10 and num<=26 ? dp[i] + dp[i+2]      : dp[i]);
            }
        }
        return dp[0];                                   
    }
};

/*
string s = "11106"
                   0 1 2 3 4
vector<int> vec = {1,1,1,0,6}
vector<int> dp  = {0,2,0,0,1,1}

i   num    num>0   dp[i]=dp[i+1]    num=>(i!=n-1)   dp[i]=>(num>=10 and num<=26)

4    6     True    dp[4] = 1        False 6=6       False dp[4] = 1
3    0     False
2    1     True    dp[2] = 0        True  1=10      True  dp[2] += dp[4] = 1+1 = 2
1    1     True    dp[1] = 2        True  1=11      True  dp[1] += dp[3] = 2+0 = 2
0    1     True    dp[0] = 2        True  1=11      True  dp[0] += dp[2] = 2+0 = 2

return dp[0] i.e. 2
*/
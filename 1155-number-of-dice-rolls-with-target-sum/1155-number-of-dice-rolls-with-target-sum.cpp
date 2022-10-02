// class Solution 
// {
//     public:
//     int mod = 100000007;	
//     int numRollsToTarget(int n, int k, int target) 
//     {       
//         if(target==0 and n==0)	                                        
//             return 1;
//         if(target<0 or n==0)	                                        
//             return 0;
        
//         int res=0;                                                  
//         for (int i=1; i<=k; i++) 
//             res += (numRollsToTarget(n-1 , k , target-i)%mod) %mod;	
//         return res;	
//     }
// };

class Solution 
{
    public:
    int dp[33][1003], mod = 1e9+7;
    int compute(vector<int> &nums , int target, int n)
    {        
        if(n==0 and target==0)
            return 1;
        
        if((target<0 or n==0))
            return 0;
        
        if(dp[n][target]!=-1)
            return dp[n][target];
        
        int ways=0;
        for(int i : nums)
        {
            if(target >= i)
                ways = ( ways%mod + compute(nums, target-i, n-1) %mod ) %mod;
            else
                break;
        }
       return dp[n][target] = ways;
    }
    
    int numRollsToTarget(int n, int k, int target) 
    {
        memset(dp, -1, sizeof(dp));
        vector<int> nums;
        for(int i=1; i<=k; i++)
            nums.push_back(i);
        return compute(nums, target, n);
    }
};
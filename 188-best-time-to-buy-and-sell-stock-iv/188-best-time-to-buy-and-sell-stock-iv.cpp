class Solution {
public:
    int maxProfit(int k, vector<int>& prices) 
    {
        if(prices.size()==0 or k==0)
            return 0;
        int n=prices.size();
        int a[k+1][n+1];
        
        for(int i=0;i<=k;i++)       // initializing the first columns with zeroes
            a[i][0]=0;
        for(int i=0;i<=n;i++)       // initializing the first row with zeroes
            a[0][i]=0;
        
        for(int i=1; i<=k; i++) 
        {
            for(int j=1; j<n; j++)
            {
                int maxi = INT_MIN;
                for(int x=0; x<j; x++)
                {
                    maxi = max( maxi, (prices[j]-prices[x] + a[i-1][x]) );
                }
                a[i][j] = max(a[i][j-1], maxi);
            }
        }
        return a[k][n-1];
    }
};
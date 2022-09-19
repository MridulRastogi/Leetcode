class Solution 
{
    public:
    long long theGreater(long long a, long long b)
    {
        if(a>=b)
            return a;
        return b;
    }
    
    long long minimumMoney (vector<vector<int>>& transactions)
    {
        long long money_lost = 0, current_money = 0;
        for(int i=0; i<transactions.size(); i++)
        {
            current_money = theGreater(current_money, min(transactions[i][0], transactions[i][1]));
            money_lost += theGreater(0, transactions[i][0]-transactions[i][1]);
        }
        return current_money + money_lost;
    }
};
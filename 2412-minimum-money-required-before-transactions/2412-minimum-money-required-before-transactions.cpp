class Solution 
{
    public:
    long long minimumMoney(vector<vector<int>>& transactions)
    {
        long long cost, cashback, losing_money = 0, current_money = 0, less, diff, result;

        for(int i=0; i<transactions.size(); i++)
        {
            cost     = transactions[i][0];
            cashback = transactions[i][1];

            less          = (cost <= cashback      ? cost : cashback     );
            current_money = (less >= current_money ? less : current_money);

            diff         = cost - cashback;
            losing_money += (diff >= 0 ? diff : 0);
        }

        result = current_money + losing_money;
        return result;
    }
};
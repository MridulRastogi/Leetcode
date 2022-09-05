class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int i=0, boughtAt, profit = 0, pos;
        bool bought = false;
        
        while(bought==false and (i+1)<prices.size())
        {
            if(prices[i] < prices[i+1])
            {
                boughtAt = prices[i];
                pos = i;
                bought = true;
                break;
            }
            i++;
        }
        //cout << boughtAt << "-";
        if(bought==false)
            return 0;
        for(int i=pos+1; i<prices.size()-1; i++)
        {
            if(prices[i]>prices[i+1] and bought==true)
            {
                if(boughtAt<prices[i])
                {
                    profit += (prices[i] - boughtAt);
                    //cout << prices[i] << " | ";
                    bought = false;
                }
            }
            if(bought == false)
            {
                if(prices[i] < prices[i+1])
                {
                    boughtAt = prices[i];
                    bought = true;
                    //cout << boughtAt << " ";
                }
            }
        }
        if(bought==true)
            profit += (prices[prices.size()-1]-boughtAt);
        //cout << endl;
        return profit;    
    }
};
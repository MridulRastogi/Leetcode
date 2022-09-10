class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        map<int, int> m;
        //sort(bills.begin(), bills.end());
        for(int i=0; i<bills.size(); i++)
        {
            m[bills[i]]++;
            if(bills[i] == 10)
            {
                if(m[5]>=1)
                    m[5] -= 1;
                else
                    return false;
            }
            else if(bills[i] == 20)
            {
                if(m[10]>=1 and m[5]>=1)
                {
                    m[10] -= 1;
                    m[5]  -= 1;
                }   
                else if(m[5]>=3)
                {
                    m[5] -= 3;
                }
                else
                    return false;
            }
        }
        return true;
    }
};
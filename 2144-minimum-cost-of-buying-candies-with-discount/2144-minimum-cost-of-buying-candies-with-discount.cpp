class Solution {
public:
    int minimumCost(vector<int>& cost) 
    {
        if(cost.size()==0)
            return 0;
        else if(cost.size()<=2)
        {
            int s=0;
            for(int i=0; i<cost.size(); i++)
                s += cost[i];
            return s;
        }
        else
        {
            int rem = (cost.size()+1)%3;
            int s=0;
            sort(cost.begin(), cost.end(), greater<int>());
            for(int i=0; i<cost.size(); i+=3)
                if(i+1 < cost.size())
                    s += cost[i]+cost[i+1];
            if(rem!=0)
                for(int i = cost.size()-1; i>cost.size()-rem; i--)
                    s += cost[i];
            return s;
        }
    }
};
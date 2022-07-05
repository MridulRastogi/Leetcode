class Solution {
public:
    int candy(vector<int>& ratings) 
    {
        int l = ratings.size();
        vector<int> candies(l, 1);
        for(int i=0; i<l-1; i++)
            if(ratings[i+1] > ratings[i])
                candies[i+1] = candies[i] + 1;
        for(int i=l-1; i>0; i--)
            if(ratings[i-1] > ratings[i] and candies[i-1] < (candies[i]+1))
                    candies[i-1] = candies[i]+1;
        return accumulate(candies.begin(), candies.end(), 0);
    }
};
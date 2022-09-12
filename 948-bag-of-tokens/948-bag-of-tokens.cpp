class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) 
    {
        if(tokens.size()==0)
            return 0;
        
        sort(tokens.begin(), tokens.end());
        deque<int> d;
        for(int i=0; i<tokens.size(); i++)
            d.push_back(tokens[i]);
        
        int score = 0, max_score = 0;
         
        while(d.size()!=0)
        {
            if(d.front() <= power)
            {
                power = power-d.front();
                d.pop_front();
                score++;
            }
            else if(score > 0)
            {
                power = power + d.back();
                d.pop_back();
                score--;
            }
            else
                break;
            max_score = max(max_score, score);
        }
        return max_score;
    }
};
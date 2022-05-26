class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int r=0, c=0;
        for(int i=0; i<moves.length(); i++)
        {
            if(moves[i]=='U')
                r++;
            else if(moves[i]=='D')
                r--;
            else if(moves[i]=='L')
                c--;
            else if(moves[i]=='R')
                c++;
        }
        if(r==0 and c==0)
            return true;
        return false;
    }
};
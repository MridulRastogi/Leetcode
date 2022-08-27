class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int r=0, c=0;
        for(int i=0; i<moves.length(); i++)
        {
            r = (moves[i]=='U' ? r+1 : (moves[i]=='D' ? r-1 : r));
            c = (moves[i]=='R' ? c+1 : (moves[i]=='L' ? c-1 : c));
        }
        return (r==0 and c==0);
    }
};
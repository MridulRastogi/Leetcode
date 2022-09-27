class Solution 
{
    public:
    int minTimeToType(string word) 
    {
        int pos, ptr = 1, time = 0;
        for(char ch:word)
        {
            pos = ch-96;
            if(pos==ptr)
                continue;
            if(pos<ptr)
                time += min(26-ptr+pos, ptr-pos);
            else if(pos>ptr)
                time += min(26-pos+ptr, pos-ptr);
            ptr = pos;
        }
        return time+word.length();
    }
};
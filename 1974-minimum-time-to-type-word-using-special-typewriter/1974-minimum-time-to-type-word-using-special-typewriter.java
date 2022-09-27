class Solution 
{
    public int minTimeToType(String word) 
    {
        int pos, ptr = 1, time = 0;
        for(int i=0; i<word.length(); i++)
        {
            pos = word.charAt(i)-96;
            if(pos==ptr)
                continue;
            if(pos<ptr)
                time += Math.min(26-ptr+pos, ptr-pos);
            else if(pos>ptr)
                time += Math.min(26-pos+ptr, pos-ptr);
            ptr = pos;
        }
        return time+word.length(); 
    }
}
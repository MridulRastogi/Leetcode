class Solution 
{
    public:
    int getLucky(string s, int k) 
    {
        int sum;
        string str="";
        for(char ch:s)
        	str += to_string(ch-'a'+1);
        while(k--)
        {
            sum = 0;
            for(char ch:str)
                sum +=  (ch-48);
            str = to_string(sum);
        }   
        return stoi(str);
    }
};
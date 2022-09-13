class Solution 
{
    public:
    bool validUtf8(vector<int>& data) 
    {
        int l = data.size(), counter=0;
        for(int i=0; i<l; i++)
        {
            bitset<8> num(data[i]);
            if(counter == 0)
            {
                for(int i=7; i>=0; i--)
                {
                    if(num[i] == 1)
                        counter++;
                    else 
                        break;
                } 
                cout << " " << counter << " " ;
                if(counter==1 or counter>4)
                    return false;
                if(counter == 0)
                    continue;
            }
            else if(!(num[7]==1 and num[6] == 0))
                return false;
             
            counter--;
        }
        return (counter==0);
    }
};
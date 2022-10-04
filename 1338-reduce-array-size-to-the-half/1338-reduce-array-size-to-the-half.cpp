class Solution 
{
    public:
    int minSetSize(vector<int>& arr) 
    {
        unordered_map<int, int> m;
        vector<int> vec;
        int s=0, count=0, l=arr.size();
        
        for(int i:arr)
            m[i]++;
        
        for(auto it:m)
            vec.push_back(it.second);
        
        sort(vec.begin(), vec.end(), greater<int>());
               
        for(int i:vec)
        {
            if((s+i) >= (l/2))
            {
                count++;
                break;
            }
            else
            {
                s += i;
                count++;
            }
        }
        return count;
    }
};
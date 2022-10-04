class Solution 
{
    public:
    int minSetSize(vector<int>& arr) 
    {
        unordered_map<int, int> m;
        vector<int> vec;
        int s=0, l=arr.size();
        
        for(int i:arr)
            m[i]++;
        arr.clear();
        for(auto it:m)
            arr.push_back(it.second);
        
        sort(arr.begin(), arr.end(), greater<int>());
               
        for(int i=0; i<arr.size(); i++)
        {
            if((s+arr[i]) >= (l/2))
                return i+1;
            else
                s += arr[i];
        }
        return 0;
    }
};
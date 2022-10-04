class Solution 
{
    public:
    int minSetSize(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        vector<int> freq;
        int l = arr.size(), count=1, s=0;
        arr.push_back(arr[l-1]+1);
        
        for(int i=0; i<=l; i++)
        {
            if(arr[i] == arr[i+1])
                count++;
            else
            {
                freq.push_back(count);
                count = 1;
            }
        }
        sort(freq.begin(), freq.end(), greater<int>());
        for(int i=0; i<freq.size(); i++)
        {
            if((s+freq[i]) >= (l/2))
                return i+1;
            else
                s+=freq[i];
        }
        return 0;       
    }
};
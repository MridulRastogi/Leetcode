class Solution 
{
    public:
    int longestPalindrome(vector<string>& words) 
    {
        unordered_map<string, int> mp;
        int result = 0;
        
        for(string str:words)
        {
            string rev = str;
            reverse(rev.begin(), rev.end());
            if(mp[rev] > 0)
            {
                result += 4;
                mp[rev]--;
            }
            else
            {
                mp[str]++;
            }
        }
        
        for(auto it:mp)
            if(it.first[0]==it.first[1] && it.second>0)
                return result+2;
        
        return result;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        if(s=="")
            return 0;
        int ma = INT_MIN, len;
        for(int i=0; i<s.length(); i++)
        {
            map<char, int> m;
            for(int j=i; j<s.length(); j++)
            {
                if(m.find(s[j])==m.end())
                    m[s[j]] = 1;
                else
                {
                    len = m.size();
                    break;
                }
                if(j==(s.length()-1))
                {
                    len = m.size();
                    break;
                }
            }
            ma = max(ma,len);
        }
        return ma;
    }
};

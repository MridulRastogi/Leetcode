#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    string getResult(string s, int start, int end)
    {
        string res = "";
        for(int i=start; i<=end; i++)
            res += s[i];
        return res;
    }
    string longestPalindrome(string s)
    {
        int l=2*s.length()+3, c=0;
        char ar[l];
        int maxLen=0, start=0, maxRight=0, center=0, p[l];
        for(int i=0; i<l; i++)
            p[i] = 0;
        ar[0]   = '@';
        ar[l-1] = '$';

        for(int i=1; i<l-1; i++)
            ar[i] = (i%2==1 ? '#' : s[c++]);

        for(int i=1; i<l-1; i++)
        {
            if(i<maxRight)
                p[i] = min(maxRight-i, p[2*center-i]);
            while(ar[i+p[i]+1] == ar[i-p[i]-1])
            {
                p[i]++;
            }
            if(i+p[i] > maxRight)
            {
                center = i;
                maxRight = i+p[i];
            }
            if(p[i] > maxLen)
            {
                start = (i-p[i]-1)/2;
                maxLen = p[i];
            }
        }
        string res = getResult(s, start, start+maxLen-1);
        return res;
    }
};
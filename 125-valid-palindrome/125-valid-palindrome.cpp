class Solution {
public:
    bool isPalindrome(string s) 
    {
        if(s==" ")
            return true;
        string r="";
        for(int i=0; i<s.length(); i++)
            if((s[i]>=65 and s[i]<=90) or (s[i]>=97 and s[i]<=122) or (s[i]>=48 and s[i]<=57))
                r += tolower(s[i]);
        s = r;
        reverse(r.begin(), r.end());
        cout << s << endl << r << endl;
        return (s==r);
    }
};
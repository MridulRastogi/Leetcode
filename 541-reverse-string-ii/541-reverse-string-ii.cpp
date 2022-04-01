class Solution {
public:
    string reverse(string s)
    {
        string reversed="";
        for(int i=s.length()-1; i>=0; i--)
            reversed += s[i];
        return reversed;
    }
    string reverseStr(string s, int k) 
    {
        int i, l=s.length(), start, end;
        string s2="", s3="";
        if(s.length()<=k)
            return reverse(s);
        start = 0;
        end = start + k;
        for(i=0; i<=(l/k); i++)
        {
            if(i==((l/k)))
                s2 = s.substr(start, l%k); 
            else
                s2 = s.substr(start, k);
            s3 += (i%2==0 ? reverse(s2) : s2);
            start = end;
            end = ((end+k)<l ? (end+k) : (l-1));
        }
        return s3;
    }
};
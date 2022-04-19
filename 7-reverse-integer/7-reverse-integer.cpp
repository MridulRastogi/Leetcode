class Solution {
public:
    int reverse(int x) 
    {
        bool flag = false;
        if(x<0)
        {
            flag = true;
            x = abs(x);
        }
        string s, s2="";
        stringstream ss;
        ss << x;
        ss >> s;
        if(s.length()>=10 and s[s.length()-1]>'2')
            return 0;
        for(int i=s.length()-1; i>=0; i--)
            s2 += s[i];
        stringstream dd(s2);
        int z = 0;
        dd >> z;
        z = (flag==true ? z*(-1) : z); 
        if(z>=2147483647 or z<=-2147483647)
            return 0;
        return z;
    }
};
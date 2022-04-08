class Solution {
public:
    int myAtoi(string s) 
    {
        string s2="", s3="";
        bool flag = false;
        for(int i=0; i<s.length(); i++)
        {
            if((s[i]>=48 and s[i]<=57) || s[i]=='-' || s[i]=='+')
            {
                s2 += s[i];
                flag = true;
            }
            else if(s[i]==' ' and flag==true)
                break;
            else if(s[i]==' ')
                continue;
            else 
                break;
        }
        stringstream ss(s2);
        int num = 0;
        ss >> num;
        return num;
    }
};
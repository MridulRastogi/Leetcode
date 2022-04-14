class Solution {
public:
    
    string shiftingLetters(string s, vector<int>& shifts) 
    {
        int ls = s.length();
        int lv = shifts.size();
        int sum=0, ascii;
        for(int i=ls-1; i>=0; i--)
        {
            sum += shifts[i];
            sum = sum%26;
            ascii = int(s[i]);
            ascii = ascii + sum;
            ascii = ascii>122 ? (96 + (ascii - 122)) : ascii;
            s[i] = char(ascii);
        }
        return s;
        /*
        
        if(s.length()==1)
        {
            int ascii;
            ascii = int(s[0]);
            ascii = ascii + (shifts[0]%26);
            ascii = ascii>122 ? (96 + (ascii - 122)) : ascii;
            s = "";
            s += char(ascii);
            return s;
        }
        int i,j,ascii;
        int ls = s.length();
        int lv = shifts.size();
        string s2 = "";
        for(i=0; i<lv; i++)
        {
            for(j=0; j<=i; j++)
            {
                ascii = int(s[j]);
                ascii = ascii + (shifts[i]%26);
                ascii = ascii>122 ? (96 + (ascii - 122)) : ascii;
                s2  += char(ascii);
            }
            if(i!=(ls-1))
                for(j=i+1; j<ls; j++)
                    s2 = s2 + s[j];
            s = s2;
            s2 = "";
        }
        return s;*/
    }
};
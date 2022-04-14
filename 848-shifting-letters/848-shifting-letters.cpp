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
            sum %= 26;
            ascii = int(s[i]);
            ascii += sum;
            ascii = ascii>122 ? (96 + (ascii - 122)) : ascii;
            s[i] = char(ascii);
        }
        return s;
    }
};
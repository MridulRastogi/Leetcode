class Solution {
public:
    string reverseVowels(string s) 
    {
        vector<char> vec;    
        string s2="";
        int i, l;
        for(i=0; i<s.length(); i++)
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
               s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                vec.push_back(s[i]);
        l = vec.size()-1;
        for(i=0; i<s.length(); i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
               s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                s2 += vec[l];
                l--;
            }
            else
                s2 += s[i];
        }
        return s2;
    }
};
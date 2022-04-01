class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=s.size(), i;
        for(i=0; i<(l/2); i++)
            swap(s[i], s[l-i-1]);
        for(i=0; i<l; i++)
            cout << s[i];
    }
};
bool cmpSizes(const string &lhs, const string &rhs) 
{
    return lhs.length() > rhs.length();
}
class Solution 
{
    public:
    string frequencySort(string s) 
    {
        vector<string> vec(75, "");
        for(int i=0; i<s.length(); i++)
            vec[s[i]-'0'] += s[i];
        sort(vec.begin(), vec.end(), cmpSizes);
        s = "";
        for(string str:vec)
            s += str;
        return s;
    }
};
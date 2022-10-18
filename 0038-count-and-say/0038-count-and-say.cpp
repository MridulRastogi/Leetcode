class Solution 
{
    public:
    string cas(string s)
    {
        vector<pair<char, int>> vec;
        int c=1;
        for(int i=0; i<s.length()-1; i++)
        {
            if(s[i] == s[i+1])
                c++;
            else
            {
                vec.push_back(make_pair(s[i], c));
                c = 1;
            }
        }
        vec.push_back(make_pair(s[s.length()-1], c));
        s = "";
        for(int i=0; i<vec.size(); i++)
            s = s + to_string(vec[i].second) + vec[i].first;
        return s;
    }
    string countAndSay(int n) 
    {
        string s = "1";
        for(int i=1; i<n; i++)
            s = cas(s);
        return s;
    }
};
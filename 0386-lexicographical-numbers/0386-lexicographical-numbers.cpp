class Solution 
{
    public:
    vector<int> lexicalOrder(int n) 
    {
        vector<string> vec;
        vector<int> res;
        for(int i=1; i<=n; i++)
            vec.push_back(to_string(i));
        sort(vec.begin(), vec.end());
        for(string str : vec)
            res.push_back(stoi(str));
        return res;
    }
};
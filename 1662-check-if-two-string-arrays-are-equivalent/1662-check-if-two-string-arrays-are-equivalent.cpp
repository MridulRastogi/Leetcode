class Solution 
{
    public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string s="", p="";
        for(string str:word1)
            s += str;
        for(string str:word2)
            p += str;
        return s==p;
    }
};
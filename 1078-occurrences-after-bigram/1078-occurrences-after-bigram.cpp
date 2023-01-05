class Solution 
{
    public:
    vector<string> findOcurrences(string text, string first, string second) 
    {
        text += " ";
        vector<string> vec, result;
        string s="";
        for(int i=0; i<text.length(); i++)
        {
            if(text[i] != ' ')
                s += text[i];
            else
            {
                vec.push_back(s);
                s = "";
            }
        }
        for(int i=0; i<vec.size()-2; i++)
            if(vec[i] == first and vec[i+1] == second)
                result.push_back(vec[i+2]);
        return result;
    }
};
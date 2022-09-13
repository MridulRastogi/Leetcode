class Solution 
{
    public:
    bool checkIfCanBeBuilt(string s, set<char>& characters)
    {
        for(int i=0; i<s.length(); i++)
            if(!characters.count(tolower(s[i])))
                return false;
        return true;
    }
    vector<string> findWords(vector<string>& words) 
    {
        vector<string> vec;
        set<char> fr({'q','w','e','r','t','y','u','i','o','p'});
        set<char> sr({'a','s','d','f','g','h','j','k','l'});
        set<char> tr({'z','x','c','v','b','n','m'});
        
        for(int i=0; i<words.size(); i++)
        {
            if(fr.count(tolower(words[i][0])))
            {
                if(checkIfCanBeBuilt(words[i], fr))
                    vec.push_back(words[i]);
            }
            else if(sr.count(tolower(words[i][0])))
            {
                if(checkIfCanBeBuilt(words[i], sr))
                    vec.push_back(words[i]);
            }
            else if(tr.count(tolower(words[i][0])))
            {
                if(checkIfCanBeBuilt(words[i], tr))
                    vec.push_back(words[i]);
            }
        }
        return vec;
    }
};
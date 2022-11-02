class Solution 
{
    public:
    void process(string& s, vector<char>& choices, unordered_set<string>& banks, unordered_set<string>& visited, queue<string>& collection)
    {
        for(int i=0; i<8; i++)
        {
            char ch = s[i];
            for(char letter:choices)
            {
                s[i] = letter;
                if(banks.count(s) and !visited.count(s))
                {
                    collection.push(s);
                    visited.insert(s);
                }
            }
            s[i] = ch;
        }
    }
    
    int minMutation(string start, string end, vector<string>& bank) 
    {
        vector<char> choices = {'A', 'C', 'G', 'T'};
        unordered_set<string> banks, visited;
        queue<string> collection;
        string s;
        char ch;
        int result = 0, len;

        for(string s:bank)
            banks.insert(s);
        if(!banks.count(end))
            return -1;
        
        collection.push(start);
        visited.insert(start);
        
        while(!collection.empty())
        {
            len = collection.size();
            while(len--)
            {
                s = collection.front();
                collection.pop();
                if(s == end)
                    return result;             
                process(s, choices, banks, visited, collection);
            }
            result++;
        }
        return -1;
    }
};
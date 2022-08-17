class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};  
        map<string, int> m;
        string s;
        for(int i=0; i<words.size(); i++)
        {
            s = "";
            for(int j=0; j<words[i].size(); j++)
                s += morse[words[i][j]-'0'-49];
            if(m.find(s)==m.end())
                m[s] = 1;
        }        
        return m.size();
    }
};
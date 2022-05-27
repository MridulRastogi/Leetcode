class Solution {
public:
    string replaceWords(vector<string>& dic, string sentence) 
    {
        string str="", s="";
        sentence+=" ";
        sort(dic.begin(), dic.end(), []
            (const string& first, const string& second)
             {
                return first.size() < second.size();
             }
        );        
        for(int i=0; i<sentence.length(); i++)
        {
            if(sentence[i]!=' ')
                str += sentence[i];
            else
            {
                for(int j=0; j<dic.size(); j++)
                    if(dic[j]==str.substr(0, dic[j].length()))
                        str = dic[j];
                s = s + str + " ";
                str = "";
            }
        }
        s = s.substr(0,s.length()-1);
        return s;
    }
};
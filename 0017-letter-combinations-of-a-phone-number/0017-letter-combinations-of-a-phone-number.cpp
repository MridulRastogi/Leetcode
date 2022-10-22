class Solution 
{
    public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> vec;
        vector<string> v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        if(digits.length()==0)
            return vec;
        
        else
        {     
            string s="";
            if(digits.length()==1)
            {
                int num = digits[0]-48;
                string s="";
                for(int i=0; i<v[num].length(); i++)
                {
                    s = v[num][i];
                    vec.push_back(s);
                }
            }
            
            else if(digits.length()==2)
            {
                int num1 = digits[0]-48;
                int num2 = digits[1]-48;
                for(int j=0; j<v[num1].length(); j++)
                    for(int k=0; k<v[num2].length(); k++)
                    {
                        s = "";
                        s = s + v[num1][j] + v[num2][k];
                        vec.push_back(s);
                    }
            }
            
            else if(digits.length()==3)
            {
                int num1 = digits[0]-48;
                int num2 = digits[1]-48;
                int num3 = digits[2]-48;
                for(int j=0; j<v[num1].length(); j++)
                    for(int k=0; k<v[num2].length(); k++)
                        for(int l=0; l<v[num3].length(); l++)
                        {
                            s = "";
                            s = s + v[num1][j] + v[num2][k] + v[num3][l];
                            vec.push_back(s);
                        }
            }
            
            else if(digits.length()==4)
            {
                int num1 = digits[0]-48;
                int num2 = digits[1]-48;
                int num3 = digits[2]-48;
                int num4 = digits[3]-48;
                for(int j=0; j<v[num1].length(); j++)
                    for(int k=0; k<v[num2].length(); k++)
                        for(int l=0; l<v[num3].length(); l++)
                            for(int m=0; m<v[num4].length(); m++)
                            {
                                s = "";
                                s = s + v[num1][j] + v[num2][k] + v[num3][l] + v[num4][m];
                                vec.push_back(s);
                            }
            }
        }
        return vec;
    }
};
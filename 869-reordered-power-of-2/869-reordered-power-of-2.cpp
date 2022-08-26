class Solution {
public:
    bool reorderedPowerOf2(int n) 
    {
        vector<string> vec;
        string s = to_string(n);
        long res=1, c=1;
        int maxi = pow(10,s.length());
        
        while(res <= maxi)
        {
            vec.push_back(to_string(res));  
            res = pow(2,c);
            c++;
        }
        
        map<char, int> sm;
        for(int i=0; i<s.length(); i++)
            sm[s[i]]++;
        
        for(string str:vec)
        {
            map<char, int> vm;
            for(int i=0; i<str.length(); i++)
                vm[str[i]]++;
            if(s.length() == str.length())
            {
                if(vm==sm)
                {
                    return true;
                }
            }
        }
        return false;        
    }
};
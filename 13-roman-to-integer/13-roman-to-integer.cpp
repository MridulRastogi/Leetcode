class Solution 
{
public:
    
int process(vector<string>& vec, map<char, int>& m)
{
    int sum = 0;
    for(string s:vec)
    {
        if(s.length()==2)
            if(m[s[0]] < m[s[1]])
                sum += (m[s[1]]-m[s[0]]);
            else 
                sum += m[s[0]]+m[s[1]];
        else
            for(int i=0; i<s.length(); i++)
                sum += m[s[i]];
    }
    return sum;
}

int romanToInt(string s) 
{
    map<char, int> m = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000},{'Z',0}};
    s = s+'Z';
    int res=0;
    
    vector<string> vec;
    string s2 = "";
    s2 += s[0];
    for(int i=0; i<s.length()-1; i++)
    {
        if(m[s[i]] <= m[s[i+1]])
            s2 += s[i+1];
        else
        {
            vec.push_back(s2);
            s2 = "";
            s2 = s[i+1];
        }
    }
    res = process(vec, m);
    return res;
}
};
// MC MX CI V = 1100 1010 101 5
// M CM XC IV = 1000+900+90+4
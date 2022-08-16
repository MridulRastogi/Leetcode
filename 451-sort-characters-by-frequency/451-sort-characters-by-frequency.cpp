class Solution {
public:
    string frequencySort(string s) 
    {
        string s2 = "";
        map<char, int> m;
        vector<pair<int, char>> vec;
        
        for(int i=0; i<s.length(); i++)
        {
            if(m.find(s[i])==m.end())
                m[s[i]] = 1;
            else 
                m[s[i]]++;
        }
        
        for(auto it:m)
            vec.push_back(make_pair(it.second, it.first));
        
        sort(vec.begin(), vec.end());
        
        for(int i=vec.size()-1; i>=0; i--)
            for(int j=0; j<vec[i].first; j++)
                s2 += vec[i].second;
       
        return s2;
    }
};
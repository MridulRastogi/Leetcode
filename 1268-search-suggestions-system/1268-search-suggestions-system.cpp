class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string s)
    {
        sort(products.begin(), products.end());
        vector<vector<string>> vec;
        int count=0, i, j=0, l=products.size();
        string fetch;
        for(i=1; i<=s.length(); i++)
        {
            fetch = s.substr(0,i);
            vector<string> v;
            count = 0;
            j = 0;
            while(j<l and count<3)
            {
                if(products[j].length() >= i)
                {
                    if(products[j].substr(0,i) == fetch)
                    {
                        v.push_back(products[j]);
                        count++;
                    }
                }
                j++;
            }
            vec.push_back(v);
        }
        return vec;
    }
};
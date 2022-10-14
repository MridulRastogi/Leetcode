#define all(x) x.begin(),x.end()
class Solution 
{
    public:
    string convert_vector_to_string(vector<int>& vec)
    {
        string res = "";
        for(int i=0; i<vec.size(); i++)
            res += to_string(vec[i]);
        return res;
    }
    string process(string a, string b)
    {
        reverse(all(a));
        reverse(all(b));
        int G = max(a.length(), b.length());
        int L = min(a.length(), b.length());
        if(a.length() < b.length())
            swap(a,b);
        
        int sum, carry=0;
        string result = "";
        for(int i=0; i<G; i++)
        {
            if(i>=L)
                sum = (a[i]-'0') + carry;
            else
                sum = (a[i]-'0') + (b[i]-'0') + carry;
            
            carry = (sum>9 ? sum/10 : 0);
            sum    = sum%10;
            result = to_string(sum) + result;
        }
        if(carry > 0)
            result = to_string(carry) + result;
        return result;
    }
    vector<int> to_vector(string result)
    {
        vector<int> res;
        for(int i=0; i<result.length(); i++)
            res.push_back(result[i]-'0');
        return res;
    }
    vector<int> addToArrayForm(vector<int>& num, int k) 
    {
        return to_vector( process( convert_vector_to_string(num) , to_string(k) ) );
    }
};
#define all(x) x.begin(),x.end()
class Solution 
{
    public:
    string addStrings(string a, string b) 
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
};

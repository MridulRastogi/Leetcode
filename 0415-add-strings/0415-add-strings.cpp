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
            sum    = (i>=L ? (a[i]-'0')+carry : (a[i]-'0')+(b[i]-'0')+carry);            
            carry  = (sum>9 ? sum/10 : 0);
            sum    = sum%10;
            result = to_string(sum) + result;
        }
        result = (carry>0 ? to_string(carry)+result : result);
        return result;
    }
};

/*
0 1
0 1 2
*/
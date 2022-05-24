class Solution {
public:
    int longestValidParentheses(string s) 
    {
        int res = 0;
        stack<int> st;
        st.push(-1);
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='(')
                st.push(i);
            else if(s[i]==')')
            {
                if(st.empty()==false)
                    st.pop();
                if(st.empty()==false)
                    res = max(res, i-st.top());
                else
                    st.push(i);
            }
        }
        return res;
    }
};
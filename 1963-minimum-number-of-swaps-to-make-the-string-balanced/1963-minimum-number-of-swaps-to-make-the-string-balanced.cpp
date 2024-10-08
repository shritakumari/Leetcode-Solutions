class Solution {
public:
    int minSwaps(string s) {
        
        stack<int>st;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]=='[')
            {
                st.push(s[i]);
              }
            else if (!st.empty())
            {
                st.pop();
            }
        }
        int res=st.size() +1;
        return res/2;
        
    }
};
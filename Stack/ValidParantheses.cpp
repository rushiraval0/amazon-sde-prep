class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> mp;
        stack<char> st;

        mp[']']='[';
        mp['}']='{';
        mp[')']='(';

        for(auto i : s)
        {
            if(!mp[i])
                st.push(i);
            else 
            {
                if(st.empty() || st.top()!=mp[i])
                    return false;
                
                st.pop();
            }
        }

        return st.empty();
    }
};
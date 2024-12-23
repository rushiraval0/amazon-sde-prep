class Solution {
public:
    int characterReplacement(string s, int k) 
    {        
        int slow=0;
        vector<int> ch(26,0);
        int len=0;

        for(int fast=0;fast<s.length();fast++)
        {
            ch[s[fast]-65]++;
            while((fast-slow+1) - *max_element(ch.begin(),ch.end()) > k)
            {
                ch[s[slow]-65]--;
                slow++;
            }

            len = max(fast-slow+1,len);
        }

        return len;

    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        
        string str = "";
        for(auto i : s)
        {
            if((i>='A' && i<='Z'))
            {
                char t=i+32;
                str+=t;
            }

            if((i>='a' && i<='z') || (i>='0' && i<='9'))
            {
                str+=i;
            }
        }


        int l=0;
        int r=str.size()-1;

        while(l<r)
        {
            if(str[l]!=str[r])
            {
                return false;
            }
            else
            {
                l++;
                r--;
            }
        }

        return true;
    }
};
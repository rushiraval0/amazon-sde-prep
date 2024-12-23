class Solution {
public:

    vector<int> getVec(string str)
    {
        vector<int> vec(26,0);

        for(char c : str)
        {
            vec[c-97]++;
        }

        return vec;
    }

    bool checkInclusion(string s1, string s2) {

        if(s1.size()>s2.size())
        {
            return false;
        }

        int len = s1.size();

        vector<int> vec = getVec(s1);

        for(int i=0;i<=s2.size()-len;i++)
        {
            if(vec == getVec(s2.substr(i,len)))
            {
                return true;
            }
        }

        return false;
        
    }
};
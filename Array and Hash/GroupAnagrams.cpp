#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>> stringVec;

        for(auto s : strs)
        {
            string temp = s;
            sort(temp.begin(),temp.end());

            stringVec[temp].push_back(s);
        }

        vector<vector<string>> res;

        for(auto it : stringVec)
        {
            vector<string> temp;
            for(auto i : it.second)
            {
                temp.push_back(i);
            }
            res.push_back(temp);
        }

        return res;
    }
};
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        int maxVal = INT_MIN;

        for(auto i : nums)
        {
            ump[i]++;
            if(maxVal<ump[i])
            {
                maxVal=ump[i];
            }
        }

        map<int,vector<int>> mp;

        for(auto i : ump)
        {
            mp[i.second].push_back(i.first);
        }

        vector<int> res;

        while(k)
        {
            if(mp[maxVal].size()>0)
            {
                res.push_back(mp[maxVal].back());
                mp[maxVal].pop_back();
                k--;
            }
            else
                maxVal--;
        }

        return res;

    }
};
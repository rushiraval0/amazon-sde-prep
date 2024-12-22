#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int> mp;
        int it=0;
        for(auto i : nums)
            mp[i]=it++;

        for(int i=0;i<nums.size();i++)
        {
            if(mp[target-nums[i]]>0 && i!=mp[target-nums[i]])
            {
               return {i,mp[target-nums[i]]}; 
            }
        }
        return {};
    }
};
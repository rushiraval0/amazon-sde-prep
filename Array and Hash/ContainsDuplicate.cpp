#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> unique_nums;

        for(int i=0;i<nums.size();i++)
        {
            if(unique_nums.find(nums[i]) == unique_nums.end())
            {
                unique_nums.insert(nums[i]);
            }
            else
            {                
                return true;
            }
        }

        return false;
    }
};
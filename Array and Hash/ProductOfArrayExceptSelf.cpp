#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),1);

        int l=1;
        int r=1;

        for(int i=0;i<nums.size();i++)
        {
            res[i]=l;
            l*=nums[i];
        }

        for(int i=nums.size()-1;i>=0;i--)
        {
            res[i]*=r;
            r*=nums[i];
        }

        return res;

    }
};
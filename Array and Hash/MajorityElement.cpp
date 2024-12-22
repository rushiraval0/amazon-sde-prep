#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curNum = nums[0];
        int curCount = 1;
        
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==curNum)
            {
                curCount++;
            }
            else
            {
                curCount--;
                if(curCount==0)
                {
                    curNum=nums[i];
                    curCount=1;
                }
            }
        }
        return curNum;
    }
};
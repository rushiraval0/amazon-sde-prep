class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;

        if(nums.size()<3)
            return {nums};

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]>0)
                break;
            else if(i>0 && nums[i-1]==nums[i])
                continue;
            else
            {
                int start=i+1;
                int end=nums.size()-1;

                while(start<end)
                {
                    if((nums[i]+nums[start]+nums[end]) == 0)
                    {
                        res.push_back({nums[i],nums[start],nums[end]});

                        while (start < end && nums[start] == nums[start + 1]) 
                        {
                            start++;
                        }
                        start++;
                        
                        while (start < end && nums[end - 1] == nums[end]) 
                        {
                            end--;
                        }
                        end--;
                    }
                    else if((nums[i]+nums[start]+nums[end]) > 0)
                    {
                        end--;
                    }
                    else
                    {
                        start++;
                    }
                }
            }
        }
        return res;
    }
};
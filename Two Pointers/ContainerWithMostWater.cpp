class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int res=0;

        while(l<r)
        {
            int minHeight = min(height[l],height[r]);
            int prod = minHeight*(r-l);
            res = max(res,prod);

            if(height[l]<height[r])
            {
                l++;
            }
            else
                r--;
        }
        return res;
    }
};
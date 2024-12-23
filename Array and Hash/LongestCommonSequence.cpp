#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,bool> mp;
        int maxSeq=0;

        if(nums.size()==0)
            return 0;

        for(auto i : nums)
            mp[i]=true;
        
        stack<int> st;
        
        int c=0;
        int itr=0;
        for(auto i : mp)
        {
            // cout<<i.first<<" <- checking this\n";
            if(itr==0)
            {  
                itr++;
                st.push(i.first);
            }   
            else
            {
                if(i.first-st.top()==1)
                {
                    c++;
                    if(c>maxSeq)
                        maxSeq=c;
                    st.push(i.first);
                    cout<<i.first<<" <- pushing this\n";
                }
                else
                {
                    c=0;
                    st.push(i.first);
                }
            }
        }
        return ++maxSeq;
    }
};
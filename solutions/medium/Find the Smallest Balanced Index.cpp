// Title: Find the Smallest Balanced Index
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/find-the-smallest-balanced-index/

        int ans=INT_MAX;
        long long int summ=0,prod=1;
        for(int i=0;i<n;i++)summ+=nums[i];
        for(int i=n-1;i>=0;i--){
            summ-=u;
            long long int limitt=1e14;
            if(prod==0){
            }else if(i<n-1){
                if(limitt/prod<v)prod=limitt;
                else prod*=v;
            }if(summ==prod)ans=i;
        }if(ans==INT_MAX)return -1;
        return ans;
    }
        int n=nums.size();
    int smallestBalancedIndex(vector<int>& nums) {
public:
            long long int u=nums[i];
class Solution {
                long long int v=nums[i+1];
};

// Title: Minimum Sum of Mountain Triplets II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-sum-of-mountain-triplets-ii/

class Solution {
public:
    int minimumSum(vector<int>& nums) {
        vector<int>vec;
        int mini=nums[0],n=nums.size();vec.push_back(mini);
        for(int i=1;i<n-2;i++){
            mini=min(mini,nums[i]);
        }mini=nums[n-1];
            vec.push_back(mini);
        }if(ans==INT_MAX)return -1;
        for(int i=n-2;i>0;i--){
            mini=min(nums[i+1],mini);
            if(nums[i]>mini && nums[i]>vec[i-1]){
        int ans=INT_MAX;
                ans=min(ans,nums[i]+mini+vec[i-1]);
            }
    }
        return ans;
};

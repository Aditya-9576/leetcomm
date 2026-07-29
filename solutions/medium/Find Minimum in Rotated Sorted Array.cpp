// Title: Find Minimum in Rotated Sorted Array
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
        }return ans;
            if(nums[l]<=nums[mid]){
            }else{
                ans=min(ans,nums[l]);
                l=mid+1;
                r=mid-1;
            }
    }
                ans=min(ans,nums[mid]);
        int ans=nums[l];
};

// Title: Search in Rotated Sorted Array II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            else if(nums[mid]>=nums[l]){
        }return false;
                if(target>=nums[l]&& target<nums[mid]){
            }else{
            if(nums[mid]==target)return true;
                }
                    r=mid-1;
                else{
                    l=mid+1;
                }
                if(target<=nums[r] && target>nums[mid]){
            }
                    l=mid+1;
                }else {
                    r=mid-1;
                }
        int r=nums.size()-1;
            if (nums[l] == nums[mid] && nums[mid] == nums[r]) {
                l++;
            }
    }
                r--;
};

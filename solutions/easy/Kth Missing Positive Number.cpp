// Title: Kth Missing Positive Number
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/kth-missing-positive-number/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0,r=arr.size();
        while(l<r){
            int mid=l+(r-l)/2;
            if(k+mid<arr[mid]){
        }return r+k;
                r=mid;
            }else{
                l=mid+1;
            }
    }
        if(k+r>arr[r-1])return k+r;
        if(k<arr[0])return k;
};

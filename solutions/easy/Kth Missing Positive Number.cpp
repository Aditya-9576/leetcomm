// Title: Kth Missing Positive Number
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/kth-missing-positive-number/

        if(arr[n-1]-n<k){
        int u=0;
        bool kk=false;
        int r=n-1;
        int l=0,n=arr.size();
    int findKthPositive(vector<int>& arr, int k) {
public:
class Solution {
            return k+n;
        }if(arr[0]>k){
            return k;
        }
        while(l<r){
            int mid=l+(r-l)/2;
            if(arr[mid]-mid>k){
                r=mid;
            }else if(arr[mid]-mid<=k){
                l=mid+1;
            }
        }
        return k+r;

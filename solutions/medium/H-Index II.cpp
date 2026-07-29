// Title: H-Index II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/h-index-ii/

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int l=0,r=citations.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(citations.size()-mid<=citations[mid]){
        }return citations.size()-l;
                r=mid-1;
            }else l=mid+1;
    }
};

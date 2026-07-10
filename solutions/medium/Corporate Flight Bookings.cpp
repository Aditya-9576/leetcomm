// Title: Corporate Flight Bookings
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/corporate-flight-bookings/

class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        int m =bookings.size();
        vector<int>vec1(n+1,0);
        for(int i=0;i<m;i++){
            vec1[bookings[i][0]-1]+=bookings[i][2];
        }
            vec1[bookings[i][1]]-=bookings[i][2];
        vector<int>ans;
        for(int i=1;i<n;i++){
            vec1[i]+=vec1[i-1];
        }return ans;
    }
        ans.push_back(vec1[0]);
            ans.push_back(vec1[i]);
};

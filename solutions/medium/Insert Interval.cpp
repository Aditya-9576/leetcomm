// Title: Insert Interval
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/insert-interval/

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();vector<vector<int>>ans;
        int u=0,l=newInterval[0],r=newInterval[1];
        if(n==0)return {{l,r}};
        while(u<n && l>intervals[u][1]){
            ans.push_back({intervals[u][0],intervals[u][1]});u++;
        }
        ans.push_back({newInterval[0],newInterval[1]});
        return ans;
        while(u<n && intervals[u][0] <= newInterval[1]){
            newInterval[0]=min(newInterval[0],intervals[u][0]);
        }
            newInterval[1]=max(newInterval[1],intervals[u][1]);
            u++;
        while(u<n){
        }
    }
            ans.push_back({intervals[u][0],intervals[u][1]});u++;
};

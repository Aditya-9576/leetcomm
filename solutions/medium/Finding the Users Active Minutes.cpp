// Title: Finding the Users Active Minutes
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/finding-the-users-active-minutes/

class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int>vec(k,0);
        map<int,unordered_set<int>>mpp;
        for(int i=0;i<logs.size();i++){
            mpp[logs[i][0]].insert(logs[i][1]);
        }for(auto u:mpp){
            vec[u.second.size()-1]++;
        }return vec;
    }
};

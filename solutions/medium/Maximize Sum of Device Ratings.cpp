// Title: Maximize Sum of Device Ratings
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximize-sum-of-device-ratings/

class Solution {
public:
    long long maxRatings(vector<vector<int>>& units) {
        int m=units.size();long long int sum=0;
        for(int i=0;i<m;i++){
            sort(units[i].begin(),units[i].end());
        }cout<<sum<<"k"<<minin<<"ll"<<mini;
        
        int mini=INT_MAX,minin=INT_MAX;
            mini=min(mini,units[i][0]);
            minin=min(minin,units[i][1]);
        return sum-minin+mini;
            sum+=units[i][1];
        if(units[0].size()==1){
            for(int i=0;i<m;i++){
        }
            }return sum;
    }
                sum+=units[i][0];
};

// Title: Number of Adjacent Elements With the Same Color
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-adjacent-elements-with-the-same-color/

            if(old==neww)ans[i]=count;
            else {
                    if(idx>0 && old==ann[idx-1])count--;
                    if(idx+1<n){
                if(idx>0 && neww==ann[idx-1])count++;
            int count =ans[i-1];
                        if(old==ann[idx+1])
                        count--;
                    }
            int neww=queries[i][1];
            int old=ann[idx];
        for(int i=1;i<m;i++){
        ann[queries[0][0]]=queries[0][1];
                if(idx+1<n)if(neww==ann[idx+1])count++;
                ans[i]=count;
            }ann[idx]=neww;
        }return ans;
    }
            int idx=queries[i][0];
                if(old!=0){
                }
                
            
        vector<int>ans(m,0);vector<int>ann(n,0);
        int m=queries.size();
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
public:
class Solution {
                
};

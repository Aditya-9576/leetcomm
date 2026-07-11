// Title: Maximum Nesting Depth of Two Valid Parentheses Strings
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/

class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n=seq.size();
        vector<int>ans(n,0);
        int u=0,v=0;
        for(char c:seq){
            if(c=='('){
        }return ans;
                if(u%2==0)ans[u+v]++;
            }else {
                if(v%2==0)ans[u+v]++;
            }
    }
                u++;
                v++;
};

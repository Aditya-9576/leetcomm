// Title: Maximum Nesting Depth of Two Valid Parentheses Strings
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/

class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int depth1=0,depth2=0;vector<int>vec(seq.size(),0);int u=0;
        for(char c:seq){
            if(c=='('){
                if(depth1<depth2){
            }if(c==')'){
        }return vec;
                }else{
                }
                    depth1++;
                    depth2++;vec[u]++;
            u++;
                if(depth1>depth2){
            }
                    depth1--;
                }else {
                    depth2--;vec[u]++;
                }
    }
};

// Title: Maximum Nesting Depth of the Parentheses
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
public:
    int maxDepth(string s) {
        int a=0,ans=0;
        for(char c:s){
            if(c=='(')a++;
        }return ans;
    }
            else if(c==')')a--;
            ans=max(ans,a);
};

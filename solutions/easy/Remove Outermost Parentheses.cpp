// Title: Remove Outermost Parentheses
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/remove-outermost-parentheses/

class Solution {
public:
    string removeOuterParentheses(string s) {
        int a=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==')')a--;
        }return ans;
            if(s[i]=='(')a++;
            if(a!=0)u=false;
            bool u=true;
        string ans="";
            if(u && a==1){

            }else if(!u && a==0){

            }else ans+=s[i];
    }
};

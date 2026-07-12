// Title: Reverse Substrings Between Each Pair of Parentheses
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/

class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        string str="";
        for(char c:s){
            if(c=='('){
                st.push(str);
                str="";
            } 
            else if(c==')'){
                reverse(str.begin(),str.end());
                if(!st.empty()){
                    str=st.top()+str;
                    st.pop();
                }
            }else str+=c;
        }return str;
        
        
    }
};

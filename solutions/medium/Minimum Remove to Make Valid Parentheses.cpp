// Title: Minimum Remove to Make Valid Parentheses
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<string>st;
        string str="";
        for(char c:s){
            if(c=='('){
        }
            }else if(c==')'){
                st.push(str);
                str="";
                if(!st.empty()){
            }else {
                    str=st.top()+'('+str+c;
                }
                    st.pop();
                str+=c;
            }
        while(!st.empty()){
            str=st.top()+str;st.pop();
        }return str;
    }
};

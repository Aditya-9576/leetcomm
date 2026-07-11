// Title: Minimum Remove to Make Valid Parentheses
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;string ans="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(c=='('){
        }while(!st.empty()){
            else if(c==')'){
            }cout<<c;
                if(st.empty())continue;
                st.push(ans.size());
            }
            ans.erase(st.top(),1);st.pop();
        }return ans;
    }
            char c=s[i];
            ans+=c;
                else st.pop();
};

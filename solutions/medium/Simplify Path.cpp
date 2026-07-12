// Title: Simplify Path
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/simplify-path/

class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;string yy="",uu="";
        yy+='/';uu+=path[0];
        int u=0,n=path.size();
        u++;
        st.push(uu);
        while(u<n){
            if(path[u]=='/'){
                u++;
                if(st.top()!=yy)st.push(yy);
                continue;
            }
            string str="";
            while(u<n && path[u]!='/'){
                str+=path[u];u++;
            }
            if(str==".."){
                if(st.empty()==false)st.pop();
                if(st.empty()==false)st.pop();
                if(st.empty())st.push(yy);
            }else if(str=="."){
            }

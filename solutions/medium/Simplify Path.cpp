// Title: Simplify Path
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/simplify-path/

            }
            if(str==".."){
                if(st.empty()==false)st.pop();
            }else if(str=="."){
                if(st.empty()==false)st.pop();
                if(st.empty())st.push(yy);
            }
            else {
                st.push(str);
            }
        }string ans="";
        while(!st.empty()){
            string str="";
            while(u<n && path[u]!='/'){
                str+=path[u];u++;
            }
                continue;
            ans=st.top()+ans;
            st.pop();
        }if(ans.size()==0)return yy;
        if(ans[0]!='/')ans=yy+ans;
        if(ans[ans.size()-1]=='/')ans.pop_back();
        if(ans.size()==0)return yy;
        return ans;
    }
};

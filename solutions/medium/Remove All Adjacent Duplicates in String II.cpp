// Title: Remove All Adjacent Duplicates in String II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/

            }
        }string result="";
        int m=st.size();
        while(m>0){
            while(st.top()!=0){
                result+=str[str.size()-1];st.top()--;
            }
            str.pop_back();
            st.pop();
            m--;
        }reverse(result.begin(),result.end());
        return result;
    }
};

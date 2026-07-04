// Title: Make The String Great
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/make-the-string-great/

        string ans="";
        
        for(int i=0;i<n;i++){
            bool u=true;bool uu=true;
            if(ans[m-1]<='z'&& ans[m-1]>='a')uu=false;
            if(s[i]<='z'&&s[i]>='a')u=false;
            if(uu!= u){
                if(s[i]-'a'==ans[m-1]-'A' || ans[m-1]-'a'==s[i]-'A'){
                    ans.pop_back();
            }else ans+=s[i];
            }
                else ans+=s[i];
                }
            if(m==0)ans+=s[i];
        }return ans;
    }
            else {
    string makeGood(string s) {
        int n = s.size();if(n<2)return s;
public:
class Solution {
            
            int m=ans.size();
};

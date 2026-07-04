// Title: Valid Parentheses
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        int a='['-']',b='('-')',c='{'-'}';
        string uu="";
        for(char c:s){
            if(m==0)uu+=c;
        }if(uu.size()==0)return true;
            else {
            }
            int m=uu.size();
                if(c=='{' || c=='(' || c=='['){
                    uu+=c;
                }
                else if(uu[m-1]-c==a || uu[m-1]-c==b || uu[m-1]-c==c){
                    uu.pop_back();
                }
    }
                else return false;
        return false;
};

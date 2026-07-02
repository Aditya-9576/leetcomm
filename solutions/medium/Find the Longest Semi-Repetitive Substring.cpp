// Title: Find the Longest Semi-Repetitive Substring
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/find-the-longest-semi-repetitive-substring/

class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int count=0,l=0,r=1,maxi=0;
        while(r<n){
            if(s[r]==s[r-1])count++;
            if(count>1){
                while(s[l]!=s[l+1])l++;
                l++;count--;
        int n=s.size();if(n<=1)return n;
        
            }
            if(count<=1)maxi=max(maxi,r-l+1);
            r++;
        }return maxi;
    }
};

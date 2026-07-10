// Title: Shifting Letters
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/shifting-letters/

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.size();
        vector<long long int>vec(n+1,0);
        for(int i=0;i<n;i++){
            vec[0]+=shifts[i];
        }for(int i=1;i<n;i++){
            vec[i+1]-=shifts[i];
            vec[i]+=vec[i-1];
        }string ans="";
        for(int i=0;i<n;i++){
            vec[i]+=s[i]-'a';
        }return ans;
    }
            vec[i]%=26;
            ans+=c;
            char c=vec[i]+'a';
};

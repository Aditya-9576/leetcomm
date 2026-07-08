// Title: Minimum Flips to Make Binary String Coherent
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-flips-to-make-binary-string-coherent/

        int countone=0;
        int n=s.size(),ans=n;
    int minFlips(std::string s) {
public:

class Solution {
        if(n<=2)return 0;
        for(char c:s){
            if(c=='1')countone++;
        }
        ans=min(ans,countone-1);
        ans=min(ans,n-countone);
        if(s[0]=='1')countone--;
        if(s[n-1]=='1')countone--;
        ans=min(ans,countone);
        return ans;
        if(countone==0)return 0;
    }
};

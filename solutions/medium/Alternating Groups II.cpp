// Title: Alternating Groups II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/alternating-groups-ii/

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        while(l<n){
        
        }return ans;
        int n=colors.size(),count=0,r=k-1,l=1,ans=0;
        for(int i=0;i<k-1;i++){
        }if(count==0)ans++;
    }
            if(colors[i]==colors[i+1])count++;
            if(colors[l%n]==colors[(l-1)%n])count--;
            if(colors[r%n]==colors[(r+1)%n])count++;
            if(count==0)ans++;
            l++;r++;
};

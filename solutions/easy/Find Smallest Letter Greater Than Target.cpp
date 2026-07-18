// Title: Find Smallest Letter Greater Than Target
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/find-smallest-letter-greater-than-target/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0,r=letters.size();
        while(l<r){
            int mid=l+(r-l)/2;
            if(letters[mid]-'a'>u){
        }if(r==letters.size())return letters[0];
        int u=target-'a';
                r=mid;
            }else {
                l=mid+1;
            }
    }
        else return letters[l];
};

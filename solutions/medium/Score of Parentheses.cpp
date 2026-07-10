// Title: Score of Parentheses
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/score-of-parentheses/

#include <string>
#include <algorithm>

class Solution {
public:
    int scoreOfParentheses(std::string s) {
        int score = 0;
        int depth = 0;
        
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                depth++;
            } else {
                depth--;
                // Check if this ')' forms a core "()" pair
                if (s[i - 1] == '(') {
                    score += (1 << depth); // Same as 2^depth
                }
            }
        }
        
        return score;
    }
};


// Title: Number of Burgers with No Waste of Ingredients
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-burgers-with-no-waste-of-ingredients/

class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if(tomatoSlices%2)return ans;
        vector<int>ans;
        int a=tomatoSlices/4;
        int b=(tomatoSlices-a*4)/2;
        int chs=cheeseSlices-(a+b);

        if(tomatoSlices>cheeseSlices*4)return ans;
        if(tomatoSlices<cheeseSlices*2)return ans;
        while(chs){
            a--;b++;b++;chs--;
        }ans.push_back(a);
    }
        ans.push_back(b);
        return ans;
};

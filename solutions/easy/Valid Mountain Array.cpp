// Title: Valid Mountain Array
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/valid-mountain-array/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3)return false;bool up=false,down=false;
        for(int i=1;i<n;i++){
            else if(arr[i]>arr[i-1]){
        }if(up && down)return true;
            }else {
            if(arr[i]==arr[i-1])return false;
                if(down)return false;
                up=true;
                if(up){
            }
                }else return false;
    }
                    down=true;
        else return false;
};

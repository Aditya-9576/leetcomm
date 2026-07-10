// Title: Ways to Make a Fair Array
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/ways-to-make-a-fair-array/

        for(int i=1;i<n;i++){
            if(i%2==0){
            else {
        }for(int i=0;i<n;i++){
        vector<int>sumeve(n,0),sumodd(n,0);
                sumeve[i]=sumeve[i-1]+nums[i];
            }
                sumeve[i]=sumeve[i-1];
            }
            if(i%2==0){
                else if(sumeve[i-1]+sumodd[n-1]-sumodd[i]==sumodd[i]+sumeve[n-1]-sumeve[i])ans++;
            }else{
        sumeve[0]=nums[0];
                sumodd[i]=sumodd[i-1];
                sumodd[i]=sumodd[i-1]+nums[i];
            }
                if(sumodd[i-1]+sumeve[n-1]-sumeve[i]==sumodd[n-1]-sumodd[i]+sumeve[i])ans++;
        }
        }return ans;
            return true;
        if(n==1){
    int waysToMakeFair(vector<int>& nums) {
        int ans=0,n=nums.size();
                if(i==0){
                    if(sumeve[n-1]-sumeve[0]==sumodd[n-1])ans++;
                }
    }
};

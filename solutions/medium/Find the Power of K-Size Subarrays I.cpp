// Title: Find the Power of K-Size Subarrays I
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/find-the-power-of-k-size-subarrays-i/

        for(int i=0;i<=n-k;i++){
            if(nums[i]+1!=nums[i+1]){
                stt.insert(i);
            }
        }
        unordered_set<int>stt;
        for(int i=0;i<k-1;i++){
        if(k==1){
            return vec1;
        }
            for(int i=0;i<n-k+1;i++)vec1[i]=nums[i];
            if(stt.size()==0)vec1[i]=nums[i+k-1];
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();vector<int>vec1(n-k+1,-1);
            if (stt.find(i) != stt.end()) {
                stt.erase(i); 

// Title: Find the Power of K-Size Subarrays II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/find-the-power-of-k-size-subarrays-ii/

        int n=nums.size();
        vector<int> ans(n-k+1,-1);
        int l=1,r=0,count=0;
        while(r<k-1){
            if(nums[r]+1!=nums[r+1])count++;r++;
        }if(count==0)ans[0]=nums[r];
        while(l<ans.size()){
            if(nums[l]!=nums[l-1]+1)count--;
            if(nums[r-1]+1!=nums[r])count++;
            if(count==0)ans[l]=nums[r];
            l++;r++;
        }return ans;
    }
        r=k;
};

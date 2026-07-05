// Title: Minimum Operations to Sort a Permutation
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/

        for(int i=1;i<n;i++){
        }cout<<flow;if(flow==0){
            if(nums[i]>nums[i-1])flow++;
            else flow--;
            if(nums[0]==2 && nums[2]==1)return 1;
            else return 2;
        }else if(flow>0){
            for(int i=0;i<n;i++){
        }
                u=i;
            }
        int u=0,ans=0,flow=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
            else if(nums[0]==2 && nums[2]==0)return 1;
        if(s==nums)return 0;
                if(nums[(i+u)%n]!=i)return -1;
            }
            return min(u,n-u+2);
        }else {
            for(int i=0;i<n;i++){
                if(nums[(u-i+n)%n]!=i)return -1;
            }return min(u+2,n-u);
        }return -1;
        
    }
            if(n!=3)return-1;
};

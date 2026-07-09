// Title: Number of Subarrays with Bounded Maximum
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum/

        while(u<n){
        }u=0;int l1=0,r1=0;
            }u++;
            r1=u;
            if(nums[u]>=left){
                l1=u+1;r1=l;
            }else {
                ans2+=r1-l1+1;
            }u++;
        }return ans1-ans2;
    }
};

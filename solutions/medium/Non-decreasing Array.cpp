// Title: Non-decreasing Array
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/non-decreasing-array/

        int i=0;
        bool chance=false;
        for(int i=1;i<n;i++){
            if(st.top()>nums[i]){
                if(chance)return false;
            }else st.push(nums[i]);
                chance=true;
        stack<int>st;st.push(nums[0]);
                int u=st.top();
                st.pop();
                if(st.empty()||st.top()<=nums[i]){
                    st.push(nums[i]);st.push(nums[i]);
                }else {
                    st.push(u);st.push(u);
                }
        }return true;

    }
};

// Title: Maximum Number of Vowels in a Substring of Given Length
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

        while (r<n){
            if(mpp[s[r]]==1){
            }
                ansm++;
            if(r-l+1>k){
                if(mpp[s[l]]==1){
            }
                    ansm--;
                }
                l++;
            r++;
        }return maxi;
    }
            maxi=max(ansm,maxi);
};

// Title: Minimum Operations to Sort a String
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-operations-to-sort-a-string/

        sort(vec3.begin(),vec3.end()-1);u++;
        if(vec2[n-1]==vec1[n-1])return 1;
        if(vec1[0]==vec2[0])return 1;
        }vector<int>vec3=vec1;
        }vector<int>vec2=vec1;
        sort(vec2.begin(),vec2.end());
        int u=0,v=0;
        if(vec1==vec2)return 0;
        if(n==2){
            return -1;
        sort(vec3.begin()+1,vec3.end());u++;
        if(vec3==vec2)return 2;
        sort(vec1.begin()+1,vec1.end());u++;
        sort(vec1.begin(),vec1.end()-1);u++;
        if(vec1==vec2)return 2;
        return 3;
        

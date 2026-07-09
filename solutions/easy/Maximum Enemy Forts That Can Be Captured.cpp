// Title: Maximum Enemy Forts That Can Be Captured
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-enemy-forts-that-can-be-captured/

            while(u<n&&forts[u]==0){
                k++;u++;
            }if(u<n && forts[u]==1){
            }
                bac1=true;
            if(u>0&&forts[u-1]==-1)fro2=true;
            if(u<n && forts[u]==-1){
                bac2=true;
            }
            if(fro1==true && bac2==true)ans=max(k,ans);
            u++;
        }return ans;
    }
            if(fro2==true && bac1==true)ans=max(k,ans);
};

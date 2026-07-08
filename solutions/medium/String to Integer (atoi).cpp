// Title: String to Integer (atoi)
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/string-to-integer-(atoi)/

        while(i<n && isdigit(s[i])){
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10)) {
            int digit = s[i] - '0';
        long long int num=0;
            i++;
        }
            mun=mun*(-1);
        else if(s[i]=='-'){
        if(s[i]=='+'){i++;}
        int mun=1;
                return (mun == 1) ? INT_MAX : INT_MIN;
            }
            
            num = num * 10 + digit;
            i++;
        }if(mun==1)return num;
        else return num*mun;
        
    }
};

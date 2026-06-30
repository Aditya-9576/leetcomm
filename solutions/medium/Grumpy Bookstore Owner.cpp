// Title: Grumpy Bookstore Owner
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/grumpy-bookstore-owner/

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        vector<int>vec1;
        int maxi=0;int sum=0;int m=0;int yy=0;
        for(int i=0;i<n;i++){
            if(m>=minutes){
                if(grumpy[i-minutes]==1){
                    yy-=vec1[0];
                    vec1.erase(vec1.begin(),vec1.begin()+1);
                }
            }
            if(grumpy[i]==0)sum+=customers[i];
            if(grumpy[i]==1){
                vec1.push_back(customers[i]);
                yy+=customers[i];

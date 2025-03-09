#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int n=nums.size();
            int og_sum=n*(n+1)/2;
            int sum=0;
            for(auto x: nums)
            sum=sum+x;
            return og_sum-sum;
            
        }
    };
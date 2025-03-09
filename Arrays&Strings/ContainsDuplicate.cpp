#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            unordered_map<int,int> ans;
            for(int i:nums){
                if(ans[i]>=1)
                return true;
                ans[i]++;
            }
            return false;
        }
    };
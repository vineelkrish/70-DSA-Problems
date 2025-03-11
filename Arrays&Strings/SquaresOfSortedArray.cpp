#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            
            int n=nums.size();
            vector<int> res(n);
            int left=0;
            int right=n-1;
            int index=n-1;
            while(left<=right)
            {
                if(abs(nums[left])>abs(nums[right]))
                {
                    res[index--]=nums[left]*nums[left];
                    left++;
                }
                else
                {
                    res[index--]=nums[right]*nums[right];
                    right--;
                }
            }
            return res;
    
        }
    };
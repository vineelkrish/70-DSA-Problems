#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int longestMountain(vector<int>& arr) {
            if(arr.size()<3) return 0;
            int maxi=0;
            int n=arr.size();
            for(int i=1;i<arr.size()-1;i++)
            {
                int left=0;
                int right=0;
                if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
                {
                    left=i-1;
                    right=i+1;
    
                    while(left>0 && arr[left]>arr[left-1])
                    left--;
    
                    while(right<n-1 && arr[right]>arr[right+1])
                    right++;
    
                    maxi=max(maxi,right-left+1);
                }
            }
            return maxi;
        }
    };
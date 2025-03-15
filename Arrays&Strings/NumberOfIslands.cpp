#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    void DFS(vector<vector<char>>& grid,int i,int j){
        int m=grid.size();
        int n=grid[0].size();
        if( i<0 || j>n-1 || j<0 || i>m-1 || grid[i][j]=='0')
        return;
        grid[i][j]='0';
    
        DFS(grid,i-1,j);
        DFS(grid,i+1,j);
        DFS(grid,i,j-1);
        DFS(grid,i,j+1);
    }
        int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    DFS(grid,i,j);
                    count++;
                }
            }
        }
        return count;
        }
    };
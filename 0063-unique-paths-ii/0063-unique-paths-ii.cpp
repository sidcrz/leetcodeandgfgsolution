class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
         int m = grid.size(), n = grid[0].size();
        vector<vector<int>>mp(m,vector<int>(n,-1));
        return Path(m-1,n-1,mp,grid);
    }
    
    int Path(int m,int n,vector<vector<int>>&mp,vector<vector<int>>& grid)
    {
        if(m>=0 && n>=0 && grid[m][n]==1)
            return 0;
        if(m<0||n<0)
            return 0;
        if(mp[m][n]!=-1) return mp[m][n];
        if(m==0 && n==0)
            return 1;
        int left=Path(m-1,n,mp,grid);
         int down=Path(m,n-1,mp,grid);
        return mp[m][n]=left+down;
    }
};
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>mp(m,vector<int>(n,-1));
       return Path(m-1,n-1,mp); 
        
    }
    int Path(int m,int n,vector<vector<int>>&mp)
    {
         if(m==0&&n==0)
            return 1;
        if(m<0||n<0)
            return 0;
        if(mp[m][n]!=-1)
            return mp[m][n];
        
     int up=Path(m-1,n,mp);
     int left=Path(m,n-1,mp);
     return mp[m][n]=(up+left);
    }
};
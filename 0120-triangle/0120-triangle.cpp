class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
    int n = triangle.size();
    vector<vector<int>>mp(n,vector<int>(n,-1));
        
    return f(0,0,triangle,n,mp);
    }
    
    int f(int i,int j ,vector<vector<int>>& triangle,int n,vector<vector<int>>& mp)
    {
        if(i==n-1) return triangle[n-1][j];
        if(mp[i][j]!=-1) return mp[i][j];
        
        int dg=triangle[i][j]+f(i+1,j+1,triangle,n,mp);
        int down=triangle[i][j]+f(i+1,j,triangle,n,mp);
        
        return mp[i][j]=min(dg,down);
    }
    
};
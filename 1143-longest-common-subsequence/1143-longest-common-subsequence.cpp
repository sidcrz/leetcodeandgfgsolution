class Solution {
public:
    int solution(int index1, int index2, string &X,string&Y,vector<vector<int>>&dp)
    {
        if(index1<0||index2<0)
            return 0;
        if(dp[index1][index2]!=-1) return dp[index1][index2];
        if(X[index1]==Y[index2])
            return dp[index1][index2]=1+solution(index1-1,index2-1,X,Y,dp);
        else
            return dp[index1][index2]= max(solution(index1-1,index2,X,Y,dp),solution(index1,index2-1,X,Y,dp));
    }
    int longestCommonSubsequence(string X, string Y) {
        int index1=X.size();
        int index2=Y.size();
        vector<vector<int>>dp(index1+1,vector<int>(index2+1,-1));
        return solution(index1-1,index2-1,X,Y,dp);
        
        
    }
    
    
};
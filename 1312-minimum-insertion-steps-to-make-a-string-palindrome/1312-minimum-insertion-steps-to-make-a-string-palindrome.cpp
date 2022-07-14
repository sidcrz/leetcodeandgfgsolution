class Solution {
public:
    int minInsertions(string A) {
        reverse(A.begin(),A.end());
        string B=A;
        reverse(A.begin(),A.end());
        
        int ans=lcs(A,B);
        
        return ans;
    }
    int lcs(string s1,string s2){
        
        int n=s1.length();
        
        int dp[n+1][n+1];
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]= 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        return (n-dp[n][n]);
        
    }
  
  
    
};
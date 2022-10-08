class Solution {
public:
    
   int climbS(vector<int>&dp,int n)
   {
       if(n==1) return 1;
       if(n==2) return 2;
       if(dp[n]!=-1) return dp[n];
       
       return dp[n]=climbS(dp,n-1)+climbS(dp,n-2);
       
   }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return climbS(dp,n);
        
    }
};
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return fun(n-1,nums,dp);
    }
    int fun(int ind,vector<int>&nums,vector<int>&dp)
    {
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int pick=nums[ind]+fun(ind-2,nums,dp);
        int nopick=0+fun(ind-1,nums,dp);
        return dp[ind]=max(pick,nopick);
    }
};
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
   
    int knapSack(int w, int wt[], int value[], int n) 
    { vector<pair<int,int>>v;
        // v[i].first -> value of i th item
        // v[i].second -. weight of i th item
        for(int i=0;i<n;i++){
            v.push_back({value[i],wt[i]});
        }
        // dp[i][j] -> maximum value that can be obtained using weight w and only using items till ith indx
        vector<vector<int>>dp(n+1,vector<int>(w+5,0));
        sort(v.begin(),v.end());
        for(int i=1;i<=n;i++){
            for(int j=1;j<=w;j++){
                if(j-v[i-1].second>=0)
                    dp[i][j]=max(dp[i-1][j],v[i-1].first+dp[i-1][j-v[i-1].second]);
                else 
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][w];
    }
    
};



// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
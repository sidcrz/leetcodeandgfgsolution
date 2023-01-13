// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
    public:
    void sumr(int ind,int sum,vector<int>&moi,int n,vector<int>&ss)
    {
       if(ind==n)
       {
           ss.push_back(sum);
           return ;
       }
       //to pick
       sumr(ind+1,sum+moi[ind],moi,n,ss);
       
       sumr(ind+1,sum,moi,n,ss);
       
        
    }
    
    
public:


    vector<int> subsetSums(vector<int> arr, int N)
    {
      vector<int>ss;
      sumr(0,0,arr,N,ss);
      sort(ss.begin(),ss.end());
      return ss;
      
       
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
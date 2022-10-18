//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        int count = 0;
        int cur_sum = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i <N; i++)
        {
            cur_sum += Arr[i];
            if(cur_sum == k)
                count++;
            if(mp.find(cur_sum - k) != mp.end())
                count += mp[cur_sum-k];
            mp[cur_sum]++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends
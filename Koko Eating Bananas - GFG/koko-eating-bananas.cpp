//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  int hrs(int k,vector<int>piles)
  {
      int h=0;
      if(k == 0) return INT_MAX;
        for(int i : piles)
        {
            if(i % k != 0)
            {
                h++;
            }
            h += (i / k);
        }
        return h;
  }
    int Solve(int n, vector<int>& piles, int h) {
        int low=1;
        int high=1e9+5;
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(hrs(mid,piles)>h)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return low;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
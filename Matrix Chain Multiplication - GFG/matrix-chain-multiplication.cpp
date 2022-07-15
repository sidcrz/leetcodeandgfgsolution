// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
int t[101][101];
 int mcm(int arr[],int i,int j)
 {
    if (i >= j) {
		t[i][j] = 0;
		return 0;
	}

	if (t[i][j] != -1)// when it is not zero means return the value from the table other than -1
		return t[i][j]; 

	int ans = INT_MAX;
	for (int k = i; k <= j - 1; k++) {
		int temp_ans = mcm(arr, i, k) + mcm(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
		ans = min(ans, temp_ans);
	}

	return t[i][j] = ans; // store it in table 
     
 }
    int matrixMultiplication(int n, int arr[])
    {
        memset(t,-1,sizeof(t));
        return mcm(arr,1,n-1);
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends
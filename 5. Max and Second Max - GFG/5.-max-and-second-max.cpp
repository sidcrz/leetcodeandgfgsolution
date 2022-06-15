// { Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
     

class Solution{
  public:
    
    vector<int> largestAndSecondLargest(int s, int a[]){
        int max = a[0], max2= -1;
        vector <int> c;
        
        for(int i=1;i<s;i++)
        {
            if(a[i]>max)
            {
                
                max2=max;
                max=a[i];
            }
            else if(a[i]<max && a[i] > max2)
            {
                max2=a[i];
            }
        }
        c.push_back(max);
        c.push_back(max2);
        return c;
         
    }
};

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends
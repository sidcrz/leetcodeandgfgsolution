// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public: 
  
    int majorityElement(int a[], int size)
    {
        int el=0;
        int cnt=0;
       for(int i=0;i<size;i++)
       {
           if(cnt==0)
           {
               el=a[i];
           }
           if(el==a[i])
           {
               cnt++;
           }
           else 
           {
               cnt--;
           }
           
           
       }
       int ne=0;
       for(int i=0;i<size;i++)
       {
           if(el==a[i])
           {
               ne++;
               }
           
       }
       
       if(ne>size/2)
       {
           return el;
       }
       else
       {
           return -1;
       }
       
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
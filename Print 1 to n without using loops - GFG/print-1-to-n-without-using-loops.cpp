// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void printTillN(int n)
    {
       if(n==1)
       {
           cout<<n<<" ";
           return;
       }
       printTillN(n-1);
       cout<<n<<" ";
       
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
        Solution ob;
        ob.printTillN(N);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
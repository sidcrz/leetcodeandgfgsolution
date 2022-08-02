class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
       int a=m-1;
        int b=n-1;
        int i=m+n-1;    
        while(a>=0 && b>=0){
            if(A[a]>B[b])   A[i--]=A[a--];
            else            A[i--]=B[b--];
        }
        
        
        while(b>=0)         A[i--]=B[b--];
    }
        
};
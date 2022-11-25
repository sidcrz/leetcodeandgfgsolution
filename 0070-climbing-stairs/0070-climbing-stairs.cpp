 int t[46]={0};
   

class Solution {
public:
    
   
    int climbStairs(int n) {
        
        
        
        
        if(n==1) return 1;
        if(n==2) return 2;
        if(t[n]!=0) return t[n];
        
        t[n]=climbStairs(n-1)+climbStairs(n-2);
        
        return t[n];
        
        
        
        
    }
        
};
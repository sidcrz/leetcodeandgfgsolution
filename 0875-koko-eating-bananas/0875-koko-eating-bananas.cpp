class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
     long long low=1;
     long long high=1e9+5;
     long long ans=0;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            
            if(helper(piles,mid)>h)
            {
                low=mid+1; 
            }
            else
                high=mid-1; 
        }
        return low;
        
    }
    
    long long int helper(vector<int>&piles,long long k)
    {
       long long h = 0;
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
};
class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int low=0;
        int high=a.size()-2;
        while(low<=high)
        {
            
          int mid=(low+high)/2;
        if(a[mid]==a[mid^1])
        {
            low=mid+1;
        }
            else
            {
                high=mid-1;
            }
        //logn, O(1);
        
    }
        return a[low];
    }
};
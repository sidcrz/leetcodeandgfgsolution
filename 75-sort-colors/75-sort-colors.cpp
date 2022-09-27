class Solution {
public:
    void sortColors(vector<int>& a) {
        int n=a.size();
        int lo=0;
        int mid=0;
        int hg=n-1;
        while(mid<=hg)
        {
            if(a[mid]==0)
            {
                swap(a[mid++],a[lo++]);
            }
            else if(a[mid]==2)
            {
                swap(a[mid],a[hg--]);
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            
                
        }
       
        
    }
};
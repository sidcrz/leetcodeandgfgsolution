class Solution {
public:
    int largestPerimeter(vector<int>& a) {
         int n=a.size();
        int perimeter=0;
        int sum=0;
        sort(a.begin(),a.end());
        
        for(int i=0;i<n-2;i++)
        {
            if(a[i]+a[i+1]>a[i+2] && a[i+1]+a[i+2]>a[i] && a[i]+a[i+2]>a[i+1])
            {
                sum=a[i]+a[i+2]+a[i+1];
                perimeter =max(perimeter,sum);
            }
        }
        return perimeter;
    }
};
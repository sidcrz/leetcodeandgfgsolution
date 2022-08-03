class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int>mp;
        int n=cardPoints.size();
        for(int i=n-k;i<n;i++)
        {
            mp.push_back(cardPoints[i]); 
        }
        
        for(int i=0;i<k;i++)
        {
            mp.push_back(cardPoints[i]); 
        }
        
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=mp[i];
        }
    
        int mn=sum;
       for(int i=k;i<2*k;i++)
       {
           sum-=mp[i-k];
           sum+=mp[i];
           cout<<sum<<endl;
          mn=max(mn,sum);
       }
        return mn;
        
    }
};
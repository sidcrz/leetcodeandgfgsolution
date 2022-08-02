class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& ib) {
        vector<vector<int>>ans;
        sort(ib.begin(),ib.end());
        int n=ib.size();
        ans.push_back(ib[0]);
        
        for(int i=1;i<n;i++)
        {
            if(ans.back()[1]>=ib[i][0])
            {
                ans.back()[1]=max(ans.back()[1],ib[i][1]);
            }
            
                
           
            else 
            {
                ans.push_back(ib[i]);
            }
                
        }
        return ans;
    }
};
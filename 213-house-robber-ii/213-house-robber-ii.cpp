class Solution {
public:
    int sex(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++)
        {
            int pick=nums[i];
            {
                if(i>0) pick+=prev2;
            }
            int nopick=0+prev;
            
            int curr=max(pick,nopick);
            
            
            prev2=prev;
            prev=curr;
            
        }
        return prev;
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp1,temp2;
        if(n==1) return nums[0];
        
        for(int i=0;i<n;i++)
        {
            if(i!=0)
            {
                temp1.push_back(nums[i]);
            }
            if(i!=n-1)
            {
                temp2.push_back(nums[i]);
            }
        }
        return max(sex(temp1),sex(temp2));
    }
};
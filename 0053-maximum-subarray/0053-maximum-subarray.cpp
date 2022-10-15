class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int sum=INT_MIN;
        int low=0;
        
        for(int i=0;i<nums.size();i++)
        {
            low+=nums[i];
            sum=max(low,sum);
            if(low<0)
                low=0;
            
        }
        return sum;
    }
};
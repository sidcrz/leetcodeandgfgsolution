class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        
        for(int i=0;i<n;i++ )
        {
            sum^=nums[i];
        }
        return sum;
        
    }
};
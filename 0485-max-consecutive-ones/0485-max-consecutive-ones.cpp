class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
        int count=0;
        int numberofones=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                numberofones++;
                count=max(numberofones,count);
            
            }
            if(nums[i]==0)
            {
               numberofones=0;
            }
        }
        return count;
        
    }
};
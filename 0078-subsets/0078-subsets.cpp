class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(vector<int>&nums, vector<int>&temp, int i, int n){
        if(i==n)
        {
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(nums[i]);
            helper(nums,temp,i+1,n);
        temp.pop_back();
            helper(nums,temp,i+1,n);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        helper(nums,temp,0,n );
        return ans;
        
    }
};
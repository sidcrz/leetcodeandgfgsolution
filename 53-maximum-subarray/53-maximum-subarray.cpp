class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int sum=0;
	int maxi=INT_MIN;
	for(auto it: nums)
	{
		sum+=it;
		maxi=max(sum,maxi);
		if(sum<0) sum=0;
	}
	return maxi;
    }
};
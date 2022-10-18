class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
		int count = 0;
        int cur_sum = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            cur_sum += nums[i];
            if(cur_sum == k)
                count++;
            if(mp.find(cur_sum - k) != mp.end())
                count += mp[cur_sum-k];
            mp[cur_sum]++;
        }
        return count;
    }
};
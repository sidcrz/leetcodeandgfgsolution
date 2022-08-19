class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
       int n=nums.size();
        for(int i=0;i<n;i++)
        {
            pq.emplace(nums[i]);
        }
        for(int i=0;i<k-1;i++)
        {
            pq.pop();
        }
        return pq.top();
        
    }
};
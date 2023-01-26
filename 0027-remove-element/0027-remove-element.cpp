class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val) nums[i]=51;
        }
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==51) break;
            cnt++;
        }
        return cnt;
        
    }
};
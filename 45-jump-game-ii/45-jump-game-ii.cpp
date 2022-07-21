class Solution {
public:
    int jump(vector<int>& nums) {
        int curReach = 0;
        int curMax = 0;
        int jumps = 0;
        
        for(int i = 0;i<nums.size()-1;i++){
            if(i+nums[i] > curMax){
                curMax = i +nums[i];
            }
            
            if(i==curReach){
                jumps++;
                curReach = curMax;
            }
        }
        return jumps;
    }
};



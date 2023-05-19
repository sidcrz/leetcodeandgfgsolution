class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
int count=0,maxi=0,res;

    for(int i=0;i<nums.size();i++){
        if(nums[i]%2!=0)
            count++;
        else
        {
            mp[nums[i]]++;
        }
    }
    if(count==nums.size())
        return -1;
    for(auto it:mp)
    {
        if(it.second>maxi){
            res=it.first;
            maxi=it.second;
        }
    }
    return res;
    }
};
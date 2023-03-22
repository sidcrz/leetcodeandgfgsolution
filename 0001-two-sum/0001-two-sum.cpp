class Solution {
public:
       vector<int> twoSum(vector<int>& numbers, int target) {
           unordered_map<int,int>mp;
         vector<int>ans;
          for(int i=0;i<numbers.size();i++)
          {
              if(mp.find(target-numbers[i])!=mp.end())
              {
                  ans.push_back(mp[target-numbers[i]]);
                  ans.push_back(i);
                }
                mp[numbers[i]]=i;
                                   
                                   }
                                   return ans;
                                   }
           
};
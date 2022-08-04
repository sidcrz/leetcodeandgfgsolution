class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int num1=-1;
        int num2=-1;
        int c1=0;
        int c2=0;
        int el=0;
        
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==num1)
                c1++;
            else if(nums[i]==num2)
                c2++;
            else if(c1==0)
            {
                num1=nums[i];
                c1=1;
            }
            else if(c2==0)
            {
                num2=nums[i];
                c2=1;
            }
            else
            {
                c1--;c2--;
            }
        }
       c1=c2=0;
        vector<int>mj;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==num1)
                c1++;
            if(nums[i]==num2)
                c2++;
        }
        if(num1==num2)
        {
            mj.push_back(num1);
            return mj;
        }
        if(c1>n/3)
        {
            mj.push_back(num1);
        }
        if(c2>n/3)
        {
            mj.push_back(num2);
        }
        
        return mj;
        
        
    }
};
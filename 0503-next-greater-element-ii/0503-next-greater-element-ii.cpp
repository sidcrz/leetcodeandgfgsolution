class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
      
        stack<int>st;
        int n=nums.size();
        vector<int>q(n,0);
    for(int i=2*n-1;i>=0;i--)
    {
        while(!st.empty() && st.top()<=nums[i%n])
        {
            st.pop();
        }
        if(i<n)
        {
            if(st.empty()==false)
                q[i]=st.top();
            else
                q[i]=-1;
        }
        st.push(nums[i%n]);
        
    }
        return q;
        
    }
};
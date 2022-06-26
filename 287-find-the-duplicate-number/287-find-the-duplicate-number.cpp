class Solution {
public:
    int findDuplicate(vector<int>& a) {
       int slow=a[0];
        int fast=a[0];
       do
       {
           slow=a[slow];
           fast=a[a[fast]];
       } while(slow!=fast);
                  slow=a[0];
       while(slow!=fast)
                  {
           slow=a[slow];
           fast=a[fast];  
                  }
                  return slow;
                  }
};
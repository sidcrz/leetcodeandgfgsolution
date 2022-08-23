class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string ans;
        for(int i=0;i<strs[0].size();i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[0][i]!=strs[j][i])
                    return ans;
            }
            ans.push_back(strs[0][i]);
        }
        return ans;
    }
        
            
        
};